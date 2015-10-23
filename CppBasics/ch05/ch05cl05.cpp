//
// Created by pjcabrer on 10/18/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 5.5 - demonstrates passing by value

#include "ch05cl05.h"
#include <iostream>
using namespace std;

void swap(int x, int y);

int main() {
    int x = 5, y = 10;

    std::cout << "Main. Before swap, x: " << x << " y: " << y << "\n";
    swap(x, y);
    std::cout << "Main. After swap, x: " << x << " y: " << y << "\n";
    return 0;
}

void swap(int x, int y) {
    int temp;

    std::cout << "Swap. Before swap, x: " << x << " y: " << y << "\n";

    temp = x;
    x = y;
    y = temp;
    std::cout << "Swap. After Swap, x: " << x << " y: " << y << "\n";
}