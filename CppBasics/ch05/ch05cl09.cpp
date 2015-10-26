//
// Created by pjcabrer on 10/26/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 5.9 - demonstrates inline functions

#include "ch05cl09.h"
#include <iostream>
using namespace std;

inline int Double(int);

int main() {
    int target;

    std::cout << "Enter a number to work with: ";
    std::cin >> target;
    std::cout << "\n";

    target = Double(target);
    std::cout << "Target: " << target << endl;

    target = Double(target);
    std::cout << "Target: " << target << endl;

    target = Double(target);
    std::cout << "Target: " << target << endl;
    return 0;
}

int Double(int target) {
    return 2 * target;
}


