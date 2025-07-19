#pragma once

#include <string>
#include "attack.hpp"
#include "defense.hpp"

struct Item {
    Attack attack;
    Defense defense;
    
    int value;
};