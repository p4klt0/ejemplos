/* 
 * File:   class_2_dll.cpp
 * Author: pmonfort
 * 
 * Created on 3 de octubre de 2013, 17:15
 */
#define DLL_EXPORT

#include <windows.h>
#include <iostream> //cout y demas

#include "class_2_dll.h"

class_2_dll::class_2_dll() {
    this->init();
}

class_2_dll::class_2_dll(const class_2_dll& orig) {
}

class_2_dll::~class_2_dll() {
    std::cout << "God bye World desde la .dll!" << std::endl;
}

void class_2_dll::init() {
    //Código necesario para inicializar el objeto
}

void class_2_dll::prueba() {
    std::cout << "Hello World desde la .dll!" << std::endl;
}