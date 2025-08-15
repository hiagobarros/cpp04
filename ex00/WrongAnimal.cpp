#include "WrongAnimal.hpp"

    WrongAnimal::WrongAnimal(void): type("WrongAnimal"){
        std::cout << "WrongAnimal constructor called 🚫🐾" << std::endl;
    }

    WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) 
    {
        std::cout << "WrongAnimal copy constructor called 🚫🐾" << std::endl;
    }

    WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
    {
        if(this != &other)
            *this = other;
        std::cout<<"operator= working"<<std::endl;
        return (*this);
    }
    
    void WrongAnimal::makeSound() const 
    {
      std::cout << "WrongAnimal makes a weird sound 🤨" << std::endl;
    }

 WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called 🚫🐾" << std::endl;
 }