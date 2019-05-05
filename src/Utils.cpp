/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Utils.cpp
 * Author: user
 * 
 * Created on April 23, 2019, 6:03 PM
 */

#include "Utils.h"

#include <algorithm>


// private
void Utils::_ltrim(std::string& str)
{
    str.erase(str.begin(), std::find_if(str.begin(), str.end(), [](int ch) {
        return !std::isspace(ch);
    }));
}

void Utils::_rtrim(std::string& str)
{
    str.erase(std::find_if(str.begin(), str.end(), [](int ch) {
        return !std::isspace(ch);
    }), str.end());
}


// public
std::string Utils::ltrim(const std::string& str)
{
    std::string copy(str);
    _ltrim(copy);
    
    return copy;
}

std::string Utils::rtrim(const std::string& str)
{
    std::string copy(str);
    _rtrim(copy);
    
    return copy;
}

std::string Utils::trim(const std::string& str)
{
    std::string copy(str);
    
    ltrim(copy);
    rtrim(copy);
    
    return copy;
}

std::vector<std::string> Utils::split(const std::string& str, const std::string& regex)
{
    std::vector<std::string> arrs;
    
    size_t begin = 0;
    size_t end = str.find(regex, begin);
    
    while(end != std::string::npos)
    {
        std::string s = str.substr(begin, end - begin);
        arrs.push_back(s);
        begin = end + 1 ;
        end = str.find(regex, begin);
    }

    std::string lastPart = str.substr(begin, str.length());
    arrs.push_back(lastPart);
    
    return arrs;
}
