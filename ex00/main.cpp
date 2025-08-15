

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();


    std::cout << "------ Wrong example ------" << std::endl;
    const WrongAnimal* w = new WrongCat();
    w->makeSound(); //will output the WrongAnimal sound!

    delete meta;
    delete j;
    delete i;
    delete w;
    return 0;
}