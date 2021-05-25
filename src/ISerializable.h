//
// Created by kuro_ on 24/5/2021.
//

#ifndef SERIALIZATION_JSON_ISERIALIZABLE_H
#define SERIALIZATION_JSON_ISERIALIZABLE_H

#include <../lib/nlohmann/json.hpp>
#include <string>

using namespace std;
using nlohmann::json;


namespace nlohmann{

}

class ISerializable {

public:
    /**
 * Custom to_json method automatically called.
 * @param _json the Json Object
 * @param _person the Model
 */
    template<typename T>
    virtual static void to_json(json &_json, const T &_t) = 0;

/**
 * Custom from_json method automatically called.
 * @param _json  the Json Object
 * @param _person the Model
 */
    template<typename T>
    void from_json(const json &_json, T &_person) ;
};


#endif //SERIALIZATION_JSON_ISERIALIZABLE_H
