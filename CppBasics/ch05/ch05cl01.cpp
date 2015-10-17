//
// Created by pjcabrer on 10/17/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 5.1 - demonstrates the use of function prototypes
//

#include "ch05cl01.h"
typedef unsigned short USHORT;
#include <iostream>;
using namespace std;
USHORT FindArea(USHORT length, USHORT width); //Function prototype

int main() {
    USHORT lengthOfYard;
    USHORT widthOfYard;
    USHORT areaOfYard;

    std::cout << "\nHow wide is your yard? ";
    std::cin >> widthOfYard;
    std::cout << "\nHow long is your yard? ";
    std::cin >> lengthOfYard;

    areaOfYard = FindArea(lengthOfYard,widthOfYard);

    std::cout << "\nYour yard is ";
    std::cout << areaOfYard;
    std::cout << " square feet\n\n";
    return 0;
}

USHORT FindArea(USHORT l, USHORT w) {
    return l * w;
}