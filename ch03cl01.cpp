//
// Created by pjcabrer on 8/20/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch03cl01.h"
#include <iostream>

int main() {
    std::cout << "The size of an int is:\t\t"    << sizeof(int)    << " bytes.\n";
    std::cout << "The size of a short int is:\t" << sizeof(short)  << " bytes.\n";
    std::cout << "The size of a long int is:\t"  << sizeof(long)   << " bytes.\n";
    std::cout << "The size of a char is:\t\t"    << sizeof(char)   << " bytes.\n";
    std::cout << "The size of a float is:\t\t"   << sizeof(float)  << " bytes.\n";
    std::cout << "The size of a double is:\t"    << sizeof(double) << " bytes.\n";
    return 0;
}