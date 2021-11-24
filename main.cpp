// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Nov 2021
// Leap Years

#include <iostream>
#include <string>

int main() {
    // main function for determining leap years

    // define variables
    std::string integerAsString;
    int year;

    // input
    std::cout << "Please enter the year: " << std::endl;
    std::cin >> integerAsString;

    // process/output
    try {
        year = std::stoi(integerAsString);
        if (year % 400 == 0) {
            std::cout << year << " is a leap year" << std::endl;
        } else if (year % 100 == 0) {
            std::cout << year << " is not a leap year" << std::endl;
        } else if (year % 4 == 0) {
            std::cout << year << " is a leap year" << std::endl;
        } else {
            std::cout << year << " is not a leap year" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Input must be an integer" << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
