
#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog {
    private:
        std::string name;
        std::string sound;
        std::string color;
    public:
        // This is a constructor for Dog. Read more about it in the README.md
        Dog(std::string name, std::string sound, std::string color);

        // Const is used to say that calling this method will NOT change anything about this class.
        // Const is useful for keeping everything straight in your head as you work.
        void speak() const; // < Const here.
        
        // This is an **overload**, meaning that it has the same name as the method above, except it
        // takes a different set of arguments. Taking different arguments means that C++ can know 
        // which to call, even though they are named the same thing.
        void speak(std::string language) const; 

        friend std::ostream& operator<<(std::ostream& out, const Dog dog);
};

#endif