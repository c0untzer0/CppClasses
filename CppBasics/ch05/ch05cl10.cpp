//
// Created by pjcabrer on 10/26/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 5.10 - demonstrates recursion
// Fibonacci find.
// Finds the nth Fibonacci number
// Uses this algorithm: Fib(n) = fib(n-1) + fib(n-2)
// Stop conditions: n = 2 || n = 1

#include "ch05cl10.h"
#include <iostream>
using namespace std;

int fib(int n);

int main() {
    int n, answer;
    std::cout << "Enter number to find: ";
    std::cin >> n;

    std::cout << "\n\n";

    answer = fib(n);
    std::cout << answer << " is the " << n << "th Fibonacci number\n";
    return 0;
}

int fib(int n) {
    std::cout << "Processing fib(" <<n << ")...";

    if (n < 3) {
        std::cout << " Return 1!\n";
        return (1);
    }
    else {
        std::cout << "Call fib(" << n-2 << ") and fib(" << n-1 << ").\n";
        return( fib(n-2) + fib(n-2));
    }
}