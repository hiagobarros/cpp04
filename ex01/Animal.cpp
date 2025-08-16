#include "Animal.hpp"

    Animal::Animal(void): type("Animal")
    {
        std::cout << "Animal default constructor called 🐾" << std::endl;
    }

    Animal::Animal(const Animal& other) : type(other.type) {
        std::cout << "Animal copy constructor called 🐾" << std::endl;
    }


    Animal& Animal::operator=(const Animal &other)
    {
        std::cout << "Animal copy assignment operator called 🐾" << std::endl;
        if(this != &other)
            this->type = other.type;
        return (*this);
    }
 
    void Animal::makeSound() const 
    {
        std::cout << "Animal makes a weird sound 🤨" << std::endl;
    }

 Animal::~Animal(){
    std::cout << "Animal destructor called 🐾" << std::endl;
 }


std::string Animal::getType() const 
{
    return type;
}

void	Animal::setIdea(int, const std::string &)
{
	std::cout << "setIdea: No brain, no idea!" << std::endl;
}

std::string	Animal::getIdea(int) const
{
	return ("getIdea: No brain, no idea!");
}