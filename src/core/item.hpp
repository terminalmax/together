#pragma once

#include <string>
#include "attack.hpp"
#include "defense.hpp"
#include "use.hpp"

struct Item {
    Attack attack;
    Defense defense;
    Use use;
    
    int value;
};