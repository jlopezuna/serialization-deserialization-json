//
// Created by Maikol Guzman on 10/16/20.
//

#include "FileManager.h"


/**
 * This method will serialize the vector
 * @param _personList
 * @return the string with the json array
 */
string FileManager::serialize(const vector<Person>& _personList) {
    json jsonData(_personList);
    string jsonArray = jsonData.dump();
    return jsonArray;
}

/**
 * This method deserialize the string to object
 * @param _data the string json data
 * @return the array of objects
 */
vector<Person> FileManager::deserialize(const string& _data) {
    json jsonData = json::parse(_data);
    vector<Person> personList = jsonData;

    return personList;
}
