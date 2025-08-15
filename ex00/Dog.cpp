#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog constructor called 🐶" << std::endl;
}


Dog& Dog::operator=(const Dog& other) 
{
    std::cout << "Dog copy assignment operator called 🐶" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof! 🐶" << std::endl;
}
//std::string Dog::getType() const {
//    return type;
//}


Dog::~Dog(){
    std::cout << "Dog destructor called 🐶" << std::endl;
}