#pragma once

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "fmt/format.h"
#include "fmt/ranges.h"

class IpsaValue {
public:
    virtual bool isInteger() const { return false; }
    virtual bool isString() const { return false; }
    virtual bool isList() const { return false; }
    virtual bool isDict() const { return false; }
};

class IpsaInteger : public IpsaValue {
public:
    int value = 0;
    IpsaInteger(int _value) : value(_value) {}
    virtual bool isInteger() const { return true; }
    auto getValue() const { return value; }
};

class IpsaString : public IpsaValue {
public:
    std::string value;
    IpsaString(std::string _value) : value(std::move(_value)) {}
    virtual bool isString() const { return true; }
    auto getValue() const { return value; }
};

class IpsaList : public IpsaValue {
public:
    std::vector<std::shared_ptr<IpsaValue>> value;
    IpsaList(std::vector<std::shared_ptr<IpsaValue>> _value)
        : value(std::move(_value)) {}
    virtual bool isList() const { return true; }
    auto& getValue() const { return value; }
};

class IpsaDict : public IpsaValue {
public:
    std::map<std::string, std::shared_ptr<IpsaValue>> value;
    IpsaDict(std::map<std::string, std::shared_ptr<IpsaValue>> _value)
        : value(std::move(_value)) {}
    virtual bool isDict() const { return true; }
    auto& getValue() const { return value; }
};

inline std::shared_ptr<IpsaValue> makeValue(int _value) {
    return std::make_shared<IpsaInteger>(_value);
}

inline std::shared_ptr<IpsaValue> makeValue(std::string _value) {
    return std::make_shared<IpsaString>(_value);
}

inline std::shared_ptr<IpsaValue>
makeValue(std::vector<std::shared_ptr<IpsaValue>> _value) {
    return std::make_shared<IpsaList>(_value);
}

inline std::shared_ptr<IpsaValue>
makeValue(std::map<std::string, std::shared_ptr<IpsaValue>> _value) {
    return std::make_shared<IpsaDict>(_value);
}

#define DBG(x)                                                                 \
    {                                                                          \
        auto&& val = (x);                                                      \
        fmt::println("Value of `{}` at file {} line {} is `{}`", #x, __FILE__, \
                     __LINE__, val);                                           \
    }
