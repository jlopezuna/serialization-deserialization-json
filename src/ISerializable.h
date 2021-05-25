//
// Created by kuro_ on 24/5/2021.
//

#ifndef SERIALIZATION_JSON_ISERIALIZABLE_H
#define SERIALIZATION_JSON_ISERIALIZABLE_H

#include <../lib/nlohmann/json.hpp>
#include <string>

using namespace std;
using nlohmann::json;

class ISerializable {

public:
    virtual json to_json() const = 0;
};


#endif //SERIALIZATION_JSON_ISERIALIZABLE_H
