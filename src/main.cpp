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
    FileService fileService;

    vector<Person> personList;
    Person person1 = Person(1, "Mike");
    Person person2 = Person(2, "Carlos23");

    personList.push_back(person1);
    personList.push_back(person2);

    cout << "Serialización del Json" << endl;
    cout << FileManager::serialize(personList);
    // Serialization output: [{"id":1,"name":"Mike"},{"id":2,"name":"Carlos"}]
    fileService.write("personList.json", FileManager::serialize(personList));


    vector<Person> personListFromJson;

    cout << "\n\nDeserialización del Json" << endl;

    std::string fileData = fileService.read("personList.json");
    // fileData = '[{"id":1,"name":"Mike"},{"id":2,"name":"Carlos23"}]'

    personListFromJson = FileManager::deserialize(fileData);

    for (const Person& person: personListFromJson) {
        std::cout << person.toString() << std::endl;
    }
}