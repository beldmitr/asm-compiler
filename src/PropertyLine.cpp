/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PropertyLine.cpp
 * Author: wbull
 * 
 * Created on April 23, 2019, 5:31 PM
 */

#include "PropertyLine.h"
#include "Utils.h"

#include <iostream>
#include <algorithm>

#include <g3log/g3log.hpp>

std::shared_ptr<std::pair<std::string, std::string>> PropertyLine::GetParsedLine(const std::string &line)
{
    if (line.empty())
    {
        // ignore this
        return nullptr;
    }

    // Check if it is a comment
    {
        std::string nl = Utils::ltrim(line);

        // Check if this is a comment
        if (nl[0] == '#')
        {
            // ignore this
            return nullptr;
        }
    }

    auto parts = Utils::split(line, ":");

    if (parts.size() < 2)
    {
        std::string errMessage = "Error while parsing the line " + line;
        LOG(WARNING) <<  errMessage;
        throw errMessage;
    }
    else if (parts.size() > 2)
    {
        LOG(WARNING) << "Too many params parsed in line: " << line << ". Maybe there is something wrong.";
    }

    auto pr = std::make_shared<std::pair<std::string, std::string>>( parts[0], parts[1] );
    return  pr;
}

