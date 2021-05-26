//
// Created by kuro_ on 25/5/2021.
//

#include <sstream>
#include "Animal.h"

Animal::Animal(const std::string &name, std::string type) : name(name), type(type) {}

Animal::Animal() {

}

Animal::~Animal() {

}

const std::string &Animal::getName() const {
    return name;
}

void Animal::setName(const std::string &name) {
    Animal::name = name;
}

std::string Animal::getType() const {
    return type;
}

void Animal::setType(std::string type) {
    Animal::type = type;
}

std::string Animal::toString() const {
    std::ostringstream output;
    output << "Name: " << getName()
           << ", Kind: " << getType();

    return output.str();
}
