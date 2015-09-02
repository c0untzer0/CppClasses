//
// Created by pjcabrer on 9/2/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 4.3 - demonstrates use of
// prefix and postfix increment and
// decrement operators

#include "ch04cl03.h"
#include <iostream>
using namespace std;

int main() {
    int myAge = 39;  // initialize two integers
    int yourAge = 39;
    std::cout << "I am: " << myAge << " years old.\n";
    std::cout << "You are: " << yourAge << " years old\n";
    myAge++;         // postfix increment
    ++yourAge;       // prefix increment
    std::cout << "One year passes...\n";
    std::cout << "I am: " << myAge << " years old.\n";
    std::cout << "You are: " << yourAge << " years old\n";
    std::cout << "Another year passes\n";
    std::cout << "I am: " << myAge++ << " years old.\n";
    std::cout << "You are: " << ++yourAge << " years old\n";
    std::cout << "Let's print it again.\n";
    std::cout << "I am: " << myAge << " years old.\n";
    std::cout << "You are: " << yourAge << " years old\n";
    return 0;
}