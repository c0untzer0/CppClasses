//
// Created by pjcabrer on 8/20/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch03cl04.h"
#include <iostream>
using namespace std;
int main() {
    unsigned short int smallNumber;
    smallNumber = 65535;
    std::cout << "small number:" << smallNumber << endl;
    smallNumber++;
    cout << "small number:" << smallNumber << endl;
    smallNumber++;
    std::cout << "small number:" << smallNumber << endl;
    return 0;

}