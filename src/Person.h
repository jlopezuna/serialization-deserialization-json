//
// Created by Maikol Guzman on 10/8/20.
//

#ifndef SERIALIZATION_JSON_PERSON_H
#define SERIALIZATION_JSON_PERSON_H


#include <string>
#include "ISerializable.h"

class Person : public ISerializable{
private:
    int id{};
    std::string name;
public:
    Person();

    Person(int id, std::string name);

    virtual ~Person();

    int getId() const;

    void setId(int id);

    const std::string &getName() const;

    void setName(const std::string &name);

    virtual std::string toString() const; // virtual method

    json to_json() const override;
};


#endif //SERIALIZATION_JSON_PERSON_H
