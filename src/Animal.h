//
// Created by kuro_ on 25/5/2021.
//

#ifndef SERIALIZATION_JSON_ANIMAL_H
#define SERIALIZATION_JSON_ANIMAL_H

#include <string>

class Animal {


private:
    std::string name;
    std::string type;
public:
    Animal();

    Animal(const std::string &name, std::string type);

    virtual ~Animal();

    const std::string &getName() const;

    void setName(const std::string &name);

    std::string getType() const;

    void setType(std::string type);

    virtual std::string toString() const; // virtual method
};


#endif //SERIALIZATION_JSON_ANIMAL_H
