// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, check if the package is acceptable


#include <iostream>
#include <string>

int main() {
    // This function checks package's weight and volume
    std::string weightString;
    std::string lengthString;
    std::string widthString;
    std::string heightString;
    int weightInteger;
    int lengthInteger;
    int widthInteger;
    int heightInteger;
    int volume;

    // input
    std::cout << "Enter your package's weight(kg): ";
    std::cin >> weightString;
    std::cout << "Enter your package's length(cm): ";
    std::cin >> lengthString;
    std::cout << "Enter your package's width(cm): ";
    std::cin >> widthString;
    std::cout << "Enter your package's height(cm): ";
    std::cin >> heightString;

    // process
    std::cout << "" << std::endl;
    try {
        weightInteger = std::stoi(weightString);
        lengthInteger = std::stoi(lengthString);
        widthInteger = std::stoi(widthString);
        heightInteger = std::stoi(heightString);
        volume = lengthInteger * widthInteger * heightInteger;
        if (weightInteger <= 0 || volume <= 0) {
            std::cout << "Please put in a positive integer!";
        } else if (weightInteger <= 27 || volume <= 10000) {
            std::cout << "Your package will be accepted.";
        } else {
            std::cout << "Your package is too heavy and too large!";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!";
    }
    std::cout << "\n\nDone." << std::endl;
}
