
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created!" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain copied!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain&	Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed!" << std::endl;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	else
		return ("Invalid index to get idea");
}

void	Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "Invalid index to set idea" << std::endl;
}
