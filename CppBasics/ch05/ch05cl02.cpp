//
// Created by pjcabrer on 10/17/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch05cl02.h"
#include <iostream>
using namespace std;

float Convert(float);
int main() {
    float TempFer;
    float TempCel;

    std::cout << " Please enter the temperature in Fahrenheit: ";
    std::cin >> TempFer;
    TempCel = Convert(TempFer);
    std::cout << "\nHere's the temperature in Celsius: ";
    std::cout << TempCel << endl;
    return 0;
}

float Convert(float TempFer) {
    float TempCel;
    TempCel = ((TempFer - 32) * 5) / 9;
    return TempCel;
}
