

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"



int	main(void) 
{
	std::cout << "\n\33[32m----Animal, Dog and Cat construct----\33[0m" << std::endl;
    std::cout << "\33[3m";
	Animal generic;
	Animal const*		meta = new Animal();
	Animal const*		d = new Dog(); //Dog is an Animal during the compilation
	Animal const*		c = new Cat(); //Cat is an Animal during the compilation
	Animal const&		b = Cat();

	std::cout << "\n\33[32m----Animal, Dog and Cat test----\33[0m" << std::endl;
	std::cout << "Animal is a: " << meta->getType() << " " << std::endl;
	std::cout << "Dog is a: " << d->getType() << " " << std::endl;
	std::cout << "Cat is a: " << c->getType() << " " << std::endl;
	generic.makeSound();
	meta->makeSound();
	d->makeSound(); 
	c->makeSound();
	b.makeSound();

	std::cout << "\n\33[32m----Animal, Dog and Cat destruct----\33[0m" << std::endl;
	delete(d);
	delete(c);
	delete(meta);

	std::cout << "\n\33[5m\33[31m-----------------------Wrong Example-------------------------\33[0m" << std::endl;
	std::cout << "\n\33[31m----Wrong Animal and Wrong Cat construct----\33[0m" << std::endl;
    std::cout << "\33[2m";

	WrongAnimal const*	wrongMeta = new WrongAnimal();
	WrongAnimal const*	wrongC = new WrongCat();

	std::cout << "\n\33[31m----Wrong Animal and Wrong Cat test ----\33[0m" << std::endl;
	std::cout << "WrongAnimal is a: " << wrongMeta->getType() << std::endl;
	std::cout << "WrongCat is a: " << wrongC->getType() << std::endl;
	wrongMeta->makeSound();
	wrongC->makeSound();

	std::cout << "\n\\33[31m----Wrong Animal and Wrong Cat destruct----\33[0m" << std::endl;
	delete(wrongMeta);
	delete(wrongC);

	std::cout << "\n\33[31m----Object slicing----\33[0m" << std::endl;
	Animal const	a = Dog();
	a.makeSound();

	std::cout << "\n\33[31m----Destruct stack-allocated objects----\33[0m" << std::endl;

	return (0);
}

