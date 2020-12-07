// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program adds a number progressively

#include <iostream>

int main() {
    // This function adds an inputted number progressively

    std::string numberStr;
    int number;
    int answer = 0;

    std::cout << "" << std::endl;
    std::cout << "Please enter a number to be added"
          " like the example below." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Ex: user enters 5: 1+2+3+4+5=15, so 15 is"
          " outputted" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Number : ";
    std::cin >> numberStr;
    std::cout << "" << std::endl;

    try {
        number = std::stoi(numberStr);
        while (number > 0) {
            answer = answer + number;
            number = number - 1;
        }
        std::cout << "The answer is " << answer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
