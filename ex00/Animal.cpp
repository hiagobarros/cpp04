#include "Animal.hpp"

    Animal::Animal(void): type("Animal")
    {
        std::cout << "Animal constructor called 🐾" << std::endl;
    }

    Animal::Animal(const Animal& other) : type(other.type) {
        std::cout << "Animal copy constructor called 🐾" << std::endl;
    }


    Animal& Animal::operator=(const Animal &other)
    {
        std::cout << "Animal copy assignment operator called 🐾" << std::endl;
        if(this != &other)
            this->type = other.type;
        std::cout<<"operator= working"<<std::endl;
        return (*this);
    }
 
    void Animal::makeSound() const 
    {
      //  std::cout << "Some generic animal sound" << std::endl;
        std::cout << "WrongAnimal makes a weird sound 🤨" << std::endl;
    }

 Animal::~Animal(){
    std::cout << "Animal destructor called 🐾" << std::endl;
 }


std::string Animal::getType() const {
    return type;
}
