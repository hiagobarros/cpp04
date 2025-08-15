#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int SIZE = 4;
    Animal* animals[SIZE];

    // ralf Dog, ralf Cat
    for (int i = 0; i < SIZE; i++) {
        if (i < SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    //  deep copy test
    Dog original;
    original.makeSound();
    Dog copy = original;
    copy.makeSound();

    for (int i = 0; i < SIZE; i++)
        delete animals[i];

    return 0;
}
