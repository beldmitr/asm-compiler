/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PropertyManager.cpp
 * Author: user
 * 
 * Created on April 23, 2019, 5:11 PM
 */

#include "PropertyManager.h"
#include "PropertyLine.h"

#include <fstream>
#include <iostream>
#include <cstring>  // needed for std::strerror
#include <memory>

PropertyManager::PropertyManager() {
    std::fstream file(filename);
    if (!file.is_open())
    {
        // TODO: Add log
        std::cerr << std::strerror(errno) << std::endl;
        // TODO: throw exception or just use errno??
        return;
    }
    
    std::string line;
    while(std::getline(file, line))
    {
        std::shared_ptr<PropertyLine> prop_line = std::make_shared<PropertyLine>(line);
    }
    
}


PropertyManager::~PropertyManager() {
}

