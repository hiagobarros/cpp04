#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(const std::string &type) : type(type) {
    std::cout << "Animal of type " << type << " created" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "Animal copied" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
