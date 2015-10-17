//
// Created by pjcabrer on 10/17/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch05cl03.h"
#include <iostream>
using namespace std;
void myFunction();   //prototype

int x = 5, y = 7;    //global variables
int main() {
    std::cout << "x from main: " << x << "\n";
    std::cout << "y from main: " << y << "\n\n";
    myFunction();
    std::cout << "Back from myFunction!\n\n";
    std::cout << "x from main: " << x << "\n";
    std::cout << "y from main: " << y << "\n";
    return 0;
}

void myFunction() {
    int y = 10;

    std::cout << "x from myFunction: " << x << "\n";
    std::cout << "y from myFunction: " << y << "\n\n";
}