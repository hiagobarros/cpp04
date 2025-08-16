#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

int	main(void)
{

	std::cout << "\33[32m***********OBJs heap CONSTRUCT***********\33[0m" << std::endl;
	Animal const* dog = new Dog();
	Animal const* cat = new Cat();

	std::cout << "\33[32m***********DESTRUCT heap OBJs***********\33[0m" << std::endl;
	delete(dog);
	delete(cat);

	std::cout << "\33[32m***********ARRAY OBJs***********\33[0m" << std::endl;
	int const	arraySize = 4;
	Animal const* animal[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		if (i < arraySize / 2)
		{
			std::cout<<"\33[35mindex:\33[0m"<<i<<std::endl;
			animal[i] = new Dog();
		}
		else
		{
			std::cout <<"\33[35mindex:\33[0m"<< i << std::endl;
			animal[i] = new Cat();
		}
	}

	std::cout << "\33[32m***********SOUND TEST***********\33[0m" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout <<"\33[35mindex:\33[0m"<< i << std::endl;
		animal[i]->makeSound();
	}

	std::cout << "\33[32m***********DESTRUCT ARRAY***********\33[0m" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout <<"\33[35mindex:\33[0m"<< i << std::endl;
		delete(animal[i]);
	}

	std::cout << "\33[32m***********DEEP COPY TEST***********\33[0m" << std::endl;
	Cat	meowth;
	meowth.setIdea(0, "MEOWTH idea: take the pikachu");
	Cat	meowthCopy(meowth);
	std::cout << "***Original idea: " << meowth.getIdea(0) << " -> " << meowth.getBrainPtr() << std::endl;
	std::cout << "***Copy idea: " << meowthCopy.getIdea(0) << " -> " << meowthCopy.getBrainPtr() << std::endl;
	meowthCopy.setIdea(0, "MEOWTH idea: When I said I wanted to be on top... I didn't mean on top of a balloon about to explode!");
	std::cout << "*Modified copy idea: " << meowthCopy.getIdea(0)<< " -> " << meowthCopy.getBrainPtr() << std::endl;
	std::cout << "*Original idea: " << meowth.getIdea(0) << " -> " << meowth.getBrainPtr() << std::endl;

	std::cout << "\33[32m***********THINKING... TEST***********\33[0m" << std::endl;
	Dog	arcanine;
	for (int i = 0; i < 100; i++)
		arcanine.setIdea(i, "Fire Blast!");
	for(int i = 0; i < 100; i++)
		std::cout << "arcanine's idea " << i <<": " << arcanine.getIdea(i) << std::endl;

	std::cout << "\33[32m***********OBJs stack DESTRUCT***********\33[0m" << std::endl;

	return (0);
}