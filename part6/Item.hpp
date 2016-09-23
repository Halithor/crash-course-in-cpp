
#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

class Item {
    private:
        std::string name;
        std::string action; // verb that you can do to this item.
        std::string description;
    public:
        // This is a constructor for Item. 
        Item(std::string name, std::string action, std::string description);

        void doAction();

        friend std::ostream& operator<<(std::ostream& out, const Item item);
};

#endif