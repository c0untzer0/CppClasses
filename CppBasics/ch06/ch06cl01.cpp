//
// Created by pjcabrer on 10/26/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Demonstrates declaration of a class and
// definition of an object of the class,

#include "ch06cl01.h"
#include <iostream>
using namespace std;

class Cat {
public:
    int itsAge;
    int itsWeight;
};

int main() {
    Cat Frisky;
    Frisky.itsAge = 5;
    std::cout << "Frisky is a cat who is ";
    std::cout << Frisky.itsAge << " years old.\n";
    return 0;
}