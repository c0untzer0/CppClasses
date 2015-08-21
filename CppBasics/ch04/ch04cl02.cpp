//
// Created by pjcabrer on 8/21/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch04cl02.h"
#include <iostream>
using namespace std;
int main() {
    unsigned int difference;
    unsigned int bigNumber = 100;
    unsigned int smallNumber = 50;
    difference = bigNumber - smallNumber;
    std::cout << "Difference is: " << difference;
    difference = smallNumber - bigNumber;
    std::cout << "\nNow difference is: " << difference << endl;
    return 0;
}