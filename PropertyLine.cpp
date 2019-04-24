/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PropertyLine.cpp
 * Author: user
 * 
 * Created on April 23, 2019, 5:31 PM
 */

#include "PropertyLine.h"
#include "Utils.h"

#include <iostream>
#include <algorithm>
#include <cstring>

PropertyLine::PropertyLine(const std::string& line) {
    
    this->_line = line;
    
    if (line.empty())
    {
        //TODO: log this as info or debug
        
        
        // ignore this
        return;
    }
    std::string nl = Utils::ltrim(line);
    
    // Check if this is a comment
    if (nl[0] == '#')
    {
        // TODO: log this as info
        
        // ignore this
        return;
    }
    
    
    
    
    std::cout << line << std::endl;
}

