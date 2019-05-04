/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PropertyLine.h
 * Author: user
 *
 * Created on April 23, 2019, 5:31 PM
 */

#ifndef PROPERTYLINE_H
#define PROPERTYLINE_H

#include <string>


class PropertyLine {
public:
    PropertyLine(const std::string& line);
    virtual ~PropertyLine() = default;

    std::string GetLine() const {
        return _line;
    }
private:
    std::string _line;  // TODO: Do I need it ???
};

#endif /* PROPERTYLINE_H */

