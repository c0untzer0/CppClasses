//
// Created by pjcabrer on 8/19/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch02cl04.h"

#include <iostream>
using namespace std;
// function Demonstration Function
// prints out a useful message
void DemonstrationFunction() {
    std::cout << "In Demonstration Function\n";
}

// function main - prints out a message, then
// calls DemonstrationFunction, then prints out
// a second message.
int main() {
    std::cout << "In main\n" ;
    DemonstrationFunction();
    cout << "Back in main\n";
    return 0;
}