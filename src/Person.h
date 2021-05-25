//
// Created by Maikol Guzman on 10/8/20.
//

#ifndef SERIALIZATION_JSON_PERSON_H
#define SERIALIZATION_JSON_PERSON_H

#include <../lib/nlohmann/json.hpp>
#include <string>

using namespace std;
using nlohmann::json;


class Person{
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

    void to_json(json& j, const Person& p) {
        j = json{{"name", p.name}, {"id", p.id}};
    }

    void from_json(const json& j, Person& p) {
        j.at("name").get_to(p.name);
        j.at("id").get_to(p.id);
    }
};

#endif //SERIALIZATION_JSON_PERSON_H
