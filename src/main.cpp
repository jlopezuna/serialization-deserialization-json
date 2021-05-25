//
// Created by Maikol Guzman on 9/28/20.
//

// https://github.com/nlohmann/json (Library to handle JSON)

#include <iostream>
#include "Person.h"
#include "FileManager.h"
#include "FileService.h"

using namespace std;

/**
 * Example to Serializing JSON objects
 * @return null
 */
int main() {
    vector<Person> personList;
    Person person1 = Person(1, "Mike");
    Person person2 = Person(2, "Carlos");

    personList.push_back(person1);
    personList.push_back(person2);

    string listSerialized = FileManager::serialize(personList);

    cout << "Serialización del Json" << endl;
    cout << listSerialized;
    // Serialization output: [{"id":1,"name":"Mike"},{"id":2,"name":"Carlos"}]
    FileService::write("personList.json", listSerialized);

    vector<Person> personListFromJson;
    string rawList = FileService::read("personList.json");
    cout << "\n\nDeserialización del Json" << endl;

    personListFromJson = FileManager::deserialize(rawList);

    for (const Person& person: personListFromJson) {
        std::cout << person.toString() << std::endl;
    }
}