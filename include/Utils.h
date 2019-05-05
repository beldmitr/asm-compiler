/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Utils.h
 * Author: wbull
 *
 * Created on April 23, 2019, 6:03 PM
 */

#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <string>

class Utils {
public:
    // TODO: Do it inline ??
    static std::string ltrim(const std::string& str);
    static std::string rtrim(const std::string& str);
    static std::string trim(const std::string& str);
    
    static std::vector<std::string> split(const std::string& str, const std::string& regex);
    
private:
    static void _ltrim(std::string& str);
    static void _rtrim(std::string& str);

};

#endif /* UTILS_H */

