
#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("Animal")
{
	std::cout << "AAnimal default constructor called 🐾" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
	std::cout << "AAnimal copy constructor called 🐾" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal copy assignment operator called 🐾" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called 🐾" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::setIdea(int, const std::string &)
{
	std::cout << "setIdea: No brain, no idea!" << std::endl;
}

std::string	AAnimal::getIdea(int) const
{
	return ("getIdea: No brain, no idea!");
}
