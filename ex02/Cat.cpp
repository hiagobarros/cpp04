
#include "Cat.hpp"

Cat::Cat(void) : AAnimal(), brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat default constructor called 🐱" << std::endl;
}

Cat::Cat(const Cat  &other) : AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat copy constructor called 🐱" << std::endl;
}

Cat&	Cat::operator=(const Cat  &other)
{
	std::cout << "Cat copy assignment operator called 🐱" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
		if (this->brain)
			delete (this->brain);
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}


void Cat::makeSound() const
{
    std::cout << this->type << " says: Meow! 🐱" << std::endl;
}

void	Cat::setIdea(int index, const std::string &idea)
{
	this->brain->setIdea(index, idea);
}

std::string	Cat::getIdea(int index) const
{
	return (this->brain->getIdea(index));
}

Brain const*	Cat::getBrainPtr(void) const
{
	return (this->brain);
}

Cat::~Cat(){
    std::cout << "Cat destructor called 🐱" << std::endl;
    delete(this->brain);
}