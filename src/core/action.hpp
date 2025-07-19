#pragma once

#include "actor.hpp"

enum class ActionResult {
    Success,
    Fail,
    RequiredComponentNotPresent,
    OutOfRange
};

class Action {
public:
    virtual ActionResult perform() = 0;
    ~Action() = default;
private:
};