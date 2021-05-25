//
// Created by kuro_ on 24/5/2021.
//

#ifndef SERIALIZATION_JSON_FILESERVICE_H
#define SERIALIZATION_JSON_FILESERVICE_H

#include <string>
#include <fstream>

class FileService {
public:
    FileService();

    virtual ~FileService();

    static std::string read(std::string fileName);

    static void write(std::string fileName, std::string data);
};


#endif //SERIALIZATION_JSON_FILESERVICE_H
