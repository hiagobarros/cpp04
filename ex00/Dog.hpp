#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
    
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();

        void makeSound() const;

};

#endif