
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Item.hpp"

// This is a linked list for Items.
class ItemLinkedList {
    private:
        // Private class for the Item nodes.
        struct Node {
            Item value;
            Node * next;
            
            // **Inline constructor** that uses member initializers.
            Node(Item item) :
                value(item),
                next(nullptr)
            {}

            int length();
            void add(Item item);
            Item* at(int index);
            void remove(int index);
        };
        Node * root = nullptr;
    public:
        ItemLinkedList() {};

        int length();
        void add(Item item);
        Item* at(int index);
        void remove(int i);
        
}; // DON'T FORGET THIS SEMI-COLON

#endif