//
// Created by pjcabrer on 9/19/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 4.5 - demonstrates if statement
// with else clause

#include "ch04cl05.h"
#include <iostream>
using namespace std;
int main() {
    int firstNumber, secondNumber;
    std::cout << "Please enter a big number: ";
    std::cin >> firstNumber;
    std::cout << "\nPlease enter a smaller number: ";
    std::cin >> secondNumber;
    if (firstNumber > secondNumber)
        std::cout << "\nThanks!\n";
    else
        std::cout << "\nOops. The second is bigger!";
    return 0;

}