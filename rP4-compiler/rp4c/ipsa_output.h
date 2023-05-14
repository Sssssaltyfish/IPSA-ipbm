#pragma once

#include <iostream>

#include "ipsa_value.h"

#include "fmt/format.h"
#include "fmt/ostream.h"

class IpsaOutput {
public:
    int tab;
    std::ostream& out;
    IpsaOutput(std::ostream& _out) : tab(0), out(_out) {}
    std::ostream& emit(const IpsaValue* value);
    std::ostream& emit(std::shared_ptr<IpsaValue> value);
};

template <> struct fmt::formatter<IpsaValue> : fmt::ostream_formatter {};
template <>
struct fmt::formatter<std::shared_ptr<IpsaValue>> : fmt::ostream_formatter {};

inline std::ostream& operator<<(std::ostream& os,
                                const std::shared_ptr<IpsaValue>& value) {
    auto out = IpsaOutput{os};
    return out.emit(value);
}

inline std::ostream& operator<<(std::ostream& os, const IpsaValue* value) {
    auto out = IpsaOutput{os};
    return out.emit(value);
}

inline std::ostream& IpsaOutput::emit(std::shared_ptr<IpsaValue> value) {
    return this->emit(value.get());
}

inline std::ostream& IpsaOutput::emit(const IpsaValue* value) {
    if (value == nullptr) {
        out << "null";
    } else if (value->isInteger()) {
        out << static_cast<const IpsaInteger*>(value)->getValue();
    } else if (value->isString()) {
        out << "\"" << static_cast<const IpsaString*>(value)->getValue()
            << "\"";
    } else if (value->isList()) {
        auto& l = static_cast<const IpsaList*>(value)->getValue();
        if (l.size() == 0) {
            out << "[]";
        } else {
            out << "[" << std::endl;
            tab += 2;
            std::string offset(tab, ' ');
            for (auto c = std::begin(l); c != std::end(l);) {
                out << offset;
                emit(*c);
                if (++c != std::end(l)) {
                    out << ",";
                }
                out << std::endl;
            }
            tab -= 2;
            out << std::string(tab, ' ') << "]";
        }
    } else if (value->isDict()) {
        auto& d = static_cast<const IpsaDict*>(value)->getValue();
        if (d.size() == 0) {
            out << "{}";
        } else {
            out << "{" << std::endl;
            tab += 2;
            std::string offset(tab, ' ');
            for (auto c = std::begin(d); c != std::end(d);) {
                out << offset;
                out << "\"" << c->first << "\" : ";
                emit(c->second);
                if (++c != std::end(d)) {
                    out << ",";
                }
                out << std::endl;
            }
            tab -= 2;
            out << std::string(tab, ' ') << "}";
        }
    }
    return out;
}