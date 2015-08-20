//
// Created by pjcabrer on 8/19/15.
//

#include "ch02cl02.h"

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char* argv[]) {
    std::cout << "Hello there.\n";
    std::cout << "Here is 5: " << 5 << "\n";
    std::cout << "The manipulator endl writes a new line to the screen." << endl;
    std::cout << "Here is a very big number:\t" << 70000 << endl;
    std::cout << "Here is the sum of 8 and 5:\t" << 8+5 << endl;
    std::cout << "Here's a fraction:\t\t" << (float) 5/8 << endl;
    std::cout << "And a very very big number:\t" << (double) 7000 * 7000 << endl;
    std::cout << "Don't forget to replace Jesse Liberty with your name...\n";
    std::cout << "Jesse Liberty is a C++ programmer!\n";
    return 0;
}