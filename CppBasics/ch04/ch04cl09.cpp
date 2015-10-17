//
// Created by pjcabrer on 10/17/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 4.9 - demonstrates the conditional operator
//

#include "ch04cl09.h"
#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    std::cout << "Enter two numbers.\n";
    std::cout << "First: ";
    std::cin >> x;
    std::cout << "\nSecond: ";
    std::cin >> y;
    std::cout << "\n";

    if (x > y)
        z = x;
    else z = y;

    std::cout << "z: " << z;
    std::cout << "\n";


    z = (x > y) ?  x : y;

    std::cout << "z: " << z;
    std::cout <<"\n";
 return 0;
}