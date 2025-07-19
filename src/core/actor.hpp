#pragma once

#include "component.hpp"

#include "position.hpp"
#include "health.hpp"

#include <vector>
#include <memory>

class Actor{
public:
    //Frequently used components
    Position pos{0,0};
    Health health{10,10};

    Actor(const Position& pos, const Health& health) : pos(pos), health(health) {}

    template<IsComponent T, typename... Args>
    void add_component(Args&&... args) {
        static_assert(std::is_base_of_v<Component, T>);
        std::size_t id = ComponentIDRegistry::id<T>();
        ensure_capacity(id);
        components[id] = std::make_unique<T>(std::forward<Args>(args)...);
    }

    template<IsComponent T>
    bool has_component() const {
        std::size_t id = ComponentIDRegistry::id<T>();
        return id < components.size() && components[id];
    }

    template<IsComponent T>
    T* get_component() {
        std::size_t id = ComponentIDRegistry::id<T>();
        if (id < components.size())
            return static_cast<T*>(components[id].get());
        return nullptr;
    }

    template<IsComponent T>
    void remove_component() {
        std::size_t id = ComponentIDRegistry::id<T>();
        if (id < components.size())
            components[id].reset();
    }

private:
    void ensure_capacity(std::size_t id) {
        if (id >= components.size())
            components.resize(id + 1);
    }

    std::vector<std::unique_ptr<Component>> components;
};