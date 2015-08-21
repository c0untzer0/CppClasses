//
// Created by pjcabrer on 8/21/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//

#include "ch04cl01.h"
#include <iostream>
using namespace std;
int main() {
    int a=0, b=0, x=0, y=35;
    std::cout << "a: " << a << " b: " << b;
    std::cout << " x: " << x << " y: " << y << endl;
    a = 9;
    b = 7;
    y = x = a+b;
    std::cout << "a: " << a << " b: " << b;
    std::cout << " x: " << x << " y: " << y << endl;
    return 0;
}