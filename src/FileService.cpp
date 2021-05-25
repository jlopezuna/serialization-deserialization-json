//
// Created by kuro_ on 24/5/2021.
//


#include <iomanip>
#include "FileService.h"

FileService::FileService() {}

FileService::~FileService() {

}

std::string FileService::read(std::string fileName) {
    std::ifstream fs{ fileName };
    std::string stringRead;

    fs >> stringRead;

    fs.close();
    return stringRead;
}

void FileService::write(std::string fileName, std::string data) {
    std::ofstream fs( fileName );
    fs << std::setw(4)  << data << std::endl;
    fs.close();
}
