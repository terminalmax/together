#pragma once

#include <concepts>

struct Component {
    virtual ~Component() = default;
};

template<typename T>
concept IsComponent = std::derived_from<Component, T>;

class ComponentIDRegistry {
public:
    template<IsComponent T>
    static std::size_t id() {
        static const size_t id = counter++;
        return id;
    }
private:
    static inline std::size_t counter = 0;
};