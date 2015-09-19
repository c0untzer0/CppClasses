//
// Created by pjcabrer on 9/19/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 4.5 - a complex nested
// if statement

#include "ch04cl06.h"
#include <iostream>
using namespace std;
int main() {
    // Ask for two numbers
    // Assign the numbers to bigNumber and littleNumber
    // If bigNumber is bigger than littleNumber,
    // see if they are evenly divisible
    // If they are, see if they are the same number

    int firstNumber, secondNumber;
    std::cout << "Enter two numbers.\nFirst: ";
    std::cin >> firstNumber;
    std::cout << "\nSecond: ";
    std::cin >> secondNumber;
    std::cout << "\n\n";

    if (firstNumber >= secondNumber)
    {
        if ( (firstNumber % secondNumber) == 0) // evenly divisible?
        {
            if (firstNumber == secondNumber)
                std::cout << "They are the same!\n";
            else
                std::cout << "They are evenly divisible!\n";
        }
        else
            std::cout << "They are not evenly divisible!\n";
    }
    else
        std::cout << "Hey! The second one is larger!\n";
    return 0;
}