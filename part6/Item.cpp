
#include "Item.hpp"

using namespace std;

Item::Item(std::string name, std::string action, std::string description) {
    this->name = name;
    this->action = action;
    this->description = description;
}

void Item::doAction() {
    cout << "You " << action << " the " << name << endl;
}

std::ostream& operator<<(std::ostream& out, const Item item) {
    out << "==== " << item.name << " ====" << endl;
    out << item.description << endl;
    return out;
}