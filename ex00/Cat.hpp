#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        std::string _name;
        
    public:
        Cat(void);
        //Cat(const std::string &name);
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat();

        virtual void makeSound() const;

};

#endif