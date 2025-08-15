#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat constructor called 🚫🐱" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) 
{
    std::cout << "WrongCat copy constructor called 🚫🐱" << std::endl;
}


WrongCat& WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat copy assignment operator called 🚫🐱" << std::endl;
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meeeeeh? (WrongCat sound) 😾" << std::endl;
}

//std::string WrongCat::getType() const {
//    return type;
//}


WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called 🚫🐱" << std::endl;
}