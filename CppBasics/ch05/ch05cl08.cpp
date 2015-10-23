//
// Created by pjcabrer on 10/19/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 5.8 - demonstrates
// function polymorphism

#include "ch05cl08.h"
#include <iostream>
using namespace std;

int Double(int);
long Double(long);
float Double(float);
double Double(double);

int main() {
    int myInt = 6500;
    long myLong = 65000;
    float myFloat = 6.5F;
    double myDouble = 6.5e20;

    int doubledInt;
    long doubledLong;
    float doubledFloat;
    double doubledDouble;

    std::cout << "myInt: " << myInt << "\n";
    std::cout << "myLong: " << myLong << "\n";
    std::cout << "myFloat: " << myFloat << "\n";
    std::cout << "myDouble: " << myDouble << "\n";

    doubledInt = Double(myInt);
    doubledLong = Double(myLong);
    doubledFloat = Double(myFloat);
    doubledDouble = Double(myDouble);

    std::cout << "doubledInt: " << doubledInt << "\n";
    std::cout << "doubledLong: " << doubledLong << "\n";
    std::cout << "doubledFloat: " << doubledFloat << "\n";
    std::cout << "doubledDouble: " << doubledDouble << "\n";

    return 0;
}

int Double(int original) {
    std::cout << "In Double(int)\n";
    return 2 * original;
}

long Double(long original) {
    std::cout << "In Double(long)\n";
    return 2 * original;
}

float Double(float original) {
    std::cout << "In Double(float)\n";
    return 2 * original;
}

double Double(double original) {
    std::cout << "In Double(double)\n";
    return 2 * original;
}
