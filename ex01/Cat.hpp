#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();

    void makeSound() const;

    void			setIdea(int index, std::string const& idea);  //overrride
	std::string		getIdea(int index) const;
	Brain const*	getBrainPtr(void) const;
};

#endif
