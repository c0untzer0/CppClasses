//
// Created by pjcabrer on 10/26/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch05ex07.h"
#include <iostream>
using namespace std;

float Power(float number, float power);

int main() {
    float x, power;
    float answer;
    std::cout << "Please enter a number: ";
    std::cin >> x;
    std::cout << "\nPlease enter a power: ";
    std::cin >> power;
    answer = Power(x, power);
    std::cout << "\n\nThe " << power << "th power of " << x << " is: " << answer;
}

float Power(float x, float power) {
    if (power == 0)
        return 1;
    else {
        if (power < 0)
            return 1/x * Power(x, power + 1);
        else
            return x * Power(x, power - 1);
    }
}