#pragma once
#include <vector>

#include "item.hpp"

class Inventory {
public:
    
    bool is_full() const { return inventory.size() == capacity; }
    
    void insert();
    void remove();

private:
    std::vector<Item> inventory;
    int capacity = 0;
};