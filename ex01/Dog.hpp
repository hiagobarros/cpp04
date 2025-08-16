#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();

        virtual void makeSound() const;

        void			setIdea(int index, std::string const& idea);
		std::string		getIdea(int index) const;
		Brain const*	getBrainPtr(void) const;

};

#endif