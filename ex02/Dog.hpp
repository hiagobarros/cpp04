
#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(const Dog &other);
		Dog&	operator=(const Dog &other);
		~Dog(void);

		void	makeSound(void) const;

		void			setIdea(int index, const std::string &idea);
		std::string		getIdea(int index) const;
		Brain const*	getBrainPtr(void) const;

};

#endif //DOG_HPP