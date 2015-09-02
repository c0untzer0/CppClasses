//
// Created by pjcabrer on 9/2/15.
// Copyright (c) 2015 Johan Cabrera. All rights reserved.
//
// Listing 4.4 - demonstrates if statement
// used with relational operators

#include "ch04cl04.h"
#include <iostream>
using namespace std;

int main() {
    int RedSoxScore, YankeesScore;
    std::cout << "Enter the score for the Red Sox: ";
    std::cin >> RedSoxScore;

    std::cout << "\nEnter the score for the Yankees: ";
    std::cin >> YankeesScore;

    std::cout << "\n";

    if (RedSoxScore > YankeesScore)
        std::cout << "Go Sox!\n";

    if (RedSoxScore < YankeesScore)
    {
        std::cout << "Go Yankees!\n";
        std::cout << "Happy days in New York!\n";
    }

    if (RedSoxScore == YankeesScore)
    {
        std::cout << "A tie? Naah, can't be.\n";
        std::cout << "Give me the real score for the Yanks: ";
        std::cin >> YankeesScore;

        if (RedSoxScore > YankeesScore)
            std::cout << "Knew it! Go Sox!";

        if (YankeesScore > RedSoxScore)
            std::cout << "Knew it! Go Yanks!";

        if (YankeesScore == RedSoxScore)
            std::cout << "Wow, it really was a tie!";

    }

    std::cout << "\nThanks for telling me.\n";
    return 0;
}