/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wbull
 *
 * Created on April 18, 2019, 5:12 PM
 */

#include <iostream>
#include <fstream>
#include <errno.h>
#include <memory>

#include <g3log/g3log.hpp>
#include <g3log/logworker.hpp>

#include "PropertyManager.h"


const std::string logsFilename = "asm-compiler";
const std::string logsDir = "./";

void InitializeLogs()
{
    auto worker {g3::LogWorker::createLogWorker()};
    auto defaultHandler = worker->addDefaultLogger(logsFilename, logsDir);
    g3::initializeLogging(worker.get());

    LOG(INFO) << "Logs were initialized";
}


/*
 * 
 */
int main(int argc, char** argv) {
    // Harmless use of the params
    (void)argc;
    (void)argv;

    // Initialize logger
    InitializeLogs();

    // Parse assembler.settings
    std::shared_ptr<PropertyManager> property_manager = std::make_shared<PropertyManager>();
    // Do stuff

    return 0;
}

