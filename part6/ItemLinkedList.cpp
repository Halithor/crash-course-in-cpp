#include "ItemLinkedList.hpp"


int ItemLinkedList::length() {
    if (root == nullptr)
        return 0;
    return root->length();
}

int ItemLinkedList::Node::length() {
    if (this->next == nullptr)
        return 1;
    return 1 + next->length();
}

void ItemLinkedList::add(Item item) {
    if (root == nullptr) {
        root = new Node(item);
    }
    root->add(item);
}
void ItemLinkedList::Node::add(Item item) {
    if (this->next == nullptr) {
        next = new Node(item);
    }
    next->add(item);
} 

Item * ItemLinkedList::at(int index){
    if (index < 0 || root == nullptr)
        return nullptr;
    return root->at(index);
}
Item * ItemLinkedList::Node::at(int index){
    if (index == 0)
        return &value;
    if (next == nullptr)
        return nullptr;
    return next->at(index - 1);
}

void ItemLinkedList::remove(int i) {
    if (i < 0 || root == nullptr) // Negative indexes don't work and we need an item in the list. This is **defensive programming*.
        return;
    // Case for the root.
    if (i == 0){
        root = root->next;
    } else {
        root->remove(i - 1);
    }
}

void ItemLinkedList::Node::remove(int i) {
    if (i == 0) {
        if (next != nullptr)
            next = next->next;
    } else if (next != nullptr) {
        next->remove(i - 1);
    }
    // If we reach down here, it means that we have reached the end of the list, but 'i' still hasn't reached 0, therefore we
    // cannot remove something not in the list, so stop here.
}