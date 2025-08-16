
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal(void);
		AAnimal(const AAnimal &other);
		AAnimal&	operator=(const AAnimal &other);
		virtual ~AAnimal(void);

		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;

		virtual void		setIdea(int index, const std::string &idea) = 0;
		virtual std::string	getIdea(int index) const = 0;
};

#endif 