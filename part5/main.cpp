#include <iostream>
#include "Dog.hpp"

using namespace std;

int main(int argc, char * argv[]) {
    // Creating two instances of Dog here. Each line calls the constructor.
    Dog spots("spots", "woof", "purple spotted");
    Dog freddie("freddie", "Meow", "golden");

    spots.speak();
    freddie.speak();
    spots.speak("spanish");
    cout << spots;
}