#include "Dog.hpp"
#include <iostream>




Dog::Dog() : Animal(), brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog default constructor called 🐶" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) 
{
    std::cout << "Dog copy constructor called 🐶" << std::endl;
}

Dog& Dog::operator=(const Dog &other) 
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (this->brain)
            delete brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Dog copy assignment operator called 🐶" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout<<this->type<< " says: Woof! 🐶" << std::endl;
}

void	Dog::setIdea(int index, std::string const& idea)
{
	this->brain->setIdea(index, idea);
}

std::string	Dog::getIdea(int index) const
{
	return (this->brain->getIdea(index));
}

Brain const*	Dog::getBrainPtr(void) const
{
	return (this->brain);
}

Dog::~Dog() {
    std::cout << "Dog destructor called 🐶" << std::endl;
    delete this->brain;
}