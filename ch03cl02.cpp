//
// Created by pjcabrer on 8/20/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch03cl02.h"
// Demonstration of variables
#include <iostream>
using namespace std;
int main() {
    unsigned short int Width = 5, Length;
    Length = 10;

    // create  an unsigned short and initialize with result
    // of multiplying Width by Length
    unsigned short int Area  = Width * Length;
    std::cout << "Width:" << Width << "\n";
    std::cout << "Length: "  << Length << endl;
    std::cout << "Area: " << Area << endl;
    return 0;
}