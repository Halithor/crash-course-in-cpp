
#include "Dog.hpp"

using namespace std;

Dog::Dog(std::string name, std::string sound, std::string color) {
    this->name = name;
    this->sound = sound;
    this->color = color;
}

void Dog::speak() const {
    cout << this->sound << endl;
}

void Dog::speak(string language) const {
    cout << this->sound << " in " << language << endl;
}

std::ostream& operator<<(std::ostream& out, const Dog dog) {
    out <<  dog.name << " is a " << dog.color << " dog. He/She says " << dog.sound << "." << endl;
    return out;
}