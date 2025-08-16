

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "\33[32m------ Example ------\33[0m" << std::endl;
    std::cout << "\33[3m";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "\33[0m";
    std::cout << "\33[5m\33[31m------ Wrong example ------\33[0m" << std::endl;
    std::cout << "\33[2m";
    const WrongAnimal* w = new WrongCat();
    w->makeSound(); //will output the WrongAnimal sound!
    std::cout << "\33[0m";

    delete meta;
    delete j;
    delete i;
    delete w;
    
    return 0;
}