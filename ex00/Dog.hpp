#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
    
    public:
        Dog(void);
        //Dog(const std::string &name);
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();

       // std::string getType() const;
        virtual void makeSound() const;

};

#endif