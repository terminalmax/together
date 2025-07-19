#pragma once

struct Health {
    int max_health;
    int current_health;

    bool change_health(int amount) {
        current_health += amount;
        if(current_health <= 0) {
            current_health = 0;
            return true;
        }
        else if (current_health >= max_health) {
            current_health = max_health;
        }
        return false;
    }
    
    bool is_max() const {return max_health == current_health;}
    bool is_dead() const {return current_health <= 0;}
};