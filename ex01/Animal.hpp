#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();                              // Default constructor
    Animal(const std::string &type);       // Param constructor
    Animal(const Animal &other);           // Copy constructor
    Animal &operator=(const Animal &other);// Copy assignment operator
    virtual ~Animal();                     // Virtual destructor

    virtual void makeSound() const;        // Virtual for polymorphism
    std::string getType() const;
};

#endif
