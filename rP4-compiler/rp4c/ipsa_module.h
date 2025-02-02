#pragma once

#include <concepts>

#include "ipsa_value.h"

class IpsaModule {
public:
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const = 0;
};

template <std::derived_from<IpsaModule> T>
std::shared_ptr<IpsaValue> makeValue(const T* val) {
    if (val == nullptr) {
        return {};
    } else {
        return val->toIpsaValue();
    }
}

template <typename T,
          std::enable_if_t<std::is_base_of_v<IpsaModule, T>, bool> = true>
std::shared_ptr<IpsaValue> makeValue(std::vector<T> _value) {
    std::vector<std::shared_ptr<IpsaValue>> dst;
    for (auto& v : _value) {
        dst.push_back(v.toIpsaValue());
    }
    return makeValue(dst);
}

inline std::shared_ptr<IpsaValue> makeValue(const std::vector<int>& v) {
    std::vector<std::shared_ptr<IpsaValue>> temp;
    for (auto x : v) {
        temp.push_back(makeValue(x));
    }
    return makeValue(temp);
}
