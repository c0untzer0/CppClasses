//
// Created by pjcabrer on 9/30/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 4.8 - demonstrates proper use of braces
// in nested if statements

#include "ch04cl08.h"
#include <iostream>
using namespace std;

int main() {
    int x;
    std::cout << "Enter a number less than 10 or greater than 100: ";
    std::cin >> x;
    std::cout << "\n";

    if (x > 10)
    {
        if (x > 100)
            std::cout << "More than 100. Thanks!\n";
    }
    else
        std::cout << "Less than 10. Thanks!\n";
    return 0;
}