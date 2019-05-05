/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PropertyLine.h
 * Author: wbull
 *
 * Created on April 23, 2019, 5:31 PM
 */

#ifndef PROPERTYLINE_H
#define PROPERTYLINE_H

#include <string>
#include <memory>


class PropertyLine {
public:
    static std::shared_ptr<std::pair<std::string, std::string>> GetParsedLine(const std::string& line);

private:

};

#endif /* PROPERTYLINE_H */

