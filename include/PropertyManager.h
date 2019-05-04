/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PropertyManager.h
 * Author: user
 *
 * Created on April 23, 2019, 5:11 PM
 */

#ifndef PROPERTYMANAGER_H
#define PROPERTYMANAGER_H

#include <string>
#include <map>


class PropertyManager {
public:
    PropertyManager();
    virtual ~PropertyManager();
private:
    const std::string filename = "../Resources/assembler.properties";
    std::map<std::string, std::string> property_map;
};

#endif /* PROPERTYMANAGER_H */

