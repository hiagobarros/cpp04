#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        std::string _name;
        
    public:
        WrongCat(void);
        //WrongCat(const std::string &name);
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat &other);
        ~WrongCat();

        void makeSound() const;

};

#endif