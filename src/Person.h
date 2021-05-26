//
// Created by Maikol Guzman on 10/8/20.
//

#ifndef SERIALIZATION_JSON_PERSON_H
#define SERIALIZATION_JSON_PERSON_H

#include <string>
#include "Animal.h"


class Person {
private:
    int id{};
    std::string name;
    Animal *pet;
public:
    Person();

    Person(int id, std::string name);

    virtual ~Person();

    int getId() const;

    void setId(int id);

    const std::string &getName() const;

    void setName(const std::string &name);

    Animal *getPet() const;

    void setPet(Animal *pet);

    virtual std::string toString() const; // virtual method

};


#endif //SERIALIZATION_JSON_PERSON_H
