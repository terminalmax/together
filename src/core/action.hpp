#pragma once

#include "actor.hpp"

enum class ActionResult {
    Success,
    Fail,
    Invalid
};

class Action {
public:
    virtual ActionResult perform() = 0;
    ~Action() = default;
private:
};