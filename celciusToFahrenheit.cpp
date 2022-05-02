// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on May 2022
// This program

#include <iostream>

void fahrenheit() {
    // calculate farenheit

    std::string celciusString;
    float celcius;
    float fahrenheit;

    // input
    std::cout << "Enter the temperature in Celsius : ";
    std::cin >> celciusString;

    // process
    try {
        celcius = std::stof(celciusString);
        fahrenheit = (celcius * 9/5) + 32;

    // output
        std::cout << "" << celcius << "°C is " "" << fahrenheit << "°F"
        << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid temperature entered, please try again."
        << std::endl;
    }
}

int main() {
    // this function just calls other functions

    // call functions
    fahrenheit();
    std::cout << "\nDone." << std::endl;
}
