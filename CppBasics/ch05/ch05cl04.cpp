//
// Created by pjcabrer on 10/18/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 5.4 - demonstrates variables
// scoped within a block

#include "ch05cl04.h"
#include <iostream>
using namespace std;

void myFunc();

int main() {
    int x = 5;
    std::cout << "\nIn main x is: " << x;

    myFunc();

    std::cout << "\nBack in main, x is: " << x;
    return 0;
}

void myFunc() {
    int x = 8;
    std::cout << "\nIn myFunc, local x: " << x << endl;
    {
        std::cout << "\nIn block in myFunc, x is: " << x;
        int x = 9;
        std::cout << "\nVery local x: " << x;
    }

    std::cout << "\nOut of block, in myFunc, x: " << x << endl;
}