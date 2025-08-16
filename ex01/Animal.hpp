
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
    protected:
        std::string type;
        
    public:
        Animal(void);
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        virtual~Animal();

        virtual void makeSound() const;

    std::string getType() const ;
	virtual void		setIdea(int index, std::string const& idea);
	virtual std::string	getIdea(int index) const;
    

};

#endif
