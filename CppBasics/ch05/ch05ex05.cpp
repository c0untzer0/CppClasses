//
// Created by pjcabrer on 10/26/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch05ex05.h"
#include <iostream>
using namespace std;

int Division(unsigned short int x, unsigned short int divider);

int main() {
    unsigned short int first, second;
    int answer;
    std::cout << "Enter two numbers. \n Number one: ";
    std::cin >> first;
    std::cout << "Number two: ";
    std::cin >> second;
    answer = Division(first, second);
    if (answer > -1)
        std::cout << "Answer: " << answer;
    else
        std::cout << "Error, can't divide by zero!";
    return 0;
}

int Division(unsigned short int x, unsigned short int divider) {
    return divider == 0 ? -1 : x / divider;
}