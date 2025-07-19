#pragma once

#include "actor.hpp"

class PlayerController {
public:
    PlayerController(Actor& actor) : actor(actor) {} 
private:
    Actor& actor;
};