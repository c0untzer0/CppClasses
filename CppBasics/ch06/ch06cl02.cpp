//
// Created by pjcabrer on 10/26/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Cat class declaration
// Data members are private, public accessor methods
// mediate setting and getting the values of the private data

#include "ch06cl02.h"
#include <iostream>
using namespace std;

class Cat {
public:
    unsigned int GetAge();
    void SetAge(unsigned int Age);
    unsigned int GetWeight();
    void SetWeight(unsigned int Weight);
    void Meow();
private:
    unsigned int  itsAge;
    unsigned int  itsWeight;
};

unsigned int Cat::GetAge() {
    return itsAge;
}

void Cat::SetAge(unsigned int age) {
    itsAge = age;
}

unsigned int Cat::GetWeight() {
    return itsWeight;
}

void Cat::SetWeight(unsigned int weight) {
    itsWeight = weight;
}

void Cat::Meow() {
    std::cout << "Meow!\n";
}

int main() {
    Cat Frisky;
    Frisky.SetAge(5);
    std::cout << "Frisky is a cat who is ";
    std::cout << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();
    return 0;
}