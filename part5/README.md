Introduction to Classes, Objects and Make!
=====
This part introduces some really useful things, that are core of pretty much any C++ project. The first thing we show 
is a C++ Class. Classes are the most common type of object used in the C++ world. The other import element shown here
is a basic makefile. Makefiles are used to simplify the process of compiling your program.

Classes
------
Classes are an object that contains member data and **methods**. Data, or **member 
variables** is information about the class that is stored with each 
**instance** of the class, that the value is unique to each instance. In our 
main function, we make two **instances** of Dog. They are named `spots` and 
`freddie`. We pass to them the values that we would like to **initialize** 
their **member variables** with. For Dogs, we pass them their name, sound, and
color.

Methods are things that classes can do. Our dogs know how to `speak()`. You can
make a dog speak by calling something like `freddie.speak()`. This calls 
`speak()` on the **instance** named `freddie`. The output from speak is based
on the **member variables** of the **instance**. `freddie` makes a "Meow" 
sound, so when we call `speak()` on `freddie` he prints `Meow` to console.

There's a special method in the Dog class called a **constructor**. 
Constructors are used to create a new **instance** of a Dog. They 
are called when a new Dog is declared. Constructors have a special declaration
syntax, in that they have no return type, so our declaration looks like:
```cpp
Dog(string name, string sound, string color);
```
Notice the lack of `int` or `void` types before the declaration. This 
constructor is called on the first two lines of our main function.
```cpp
Dog spots("spots", "woof", "blue");
Dog freddie("freddie", "Meow", "green");
```
Each of these lines calls the constructor we defined, then creates an 
**instance** of a Dog using result of the constructor.

So what about all of these **instances** I'm talking about? What is an 
**instance** of a class. A class is defining a **type**. You can think about 
the files we wrote as a blueprint for the class. By creating an **instance** of
a class, your are using the blueprint to create a brand new object. For our 
example, the Dog class defines common attributes for dogs (the theoretical
animal), such as names, colors and that they can speak. When you create an 
**instance** you are making a specific Dog with a name and a color, such as our
friend `spots`.

### So Why the .hpp and the .cpp?
Classes are separated out into two files.