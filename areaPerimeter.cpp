// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in January 2021
// Program finds area and perimeter

#include <iostream>
#include <string>


void area(int length, int width) {
    // Function calculates area and prints it

    int area;

    // Process and output
    area = length * width;
    std::cout << "The area is: " << area << "cm²" << std::endl;
}


void perimeter(int length, int width) {
    // Function calculates perimeter and prints it

    int perimeter;

    // Process and output
    perimeter = 2 * (length + width);
    std::cout << "The perimeter is: " << perimeter << "cm" << std::endl;
}

int main() {
    // Takes user input, passes it to functions and calls them

    std::string length_string;
    std::string width_string;
    int length;
    int width;

    while (true) {
        // Input
        std::cout << "Enter length (cm): ";
        std::cin >> length_string;

        // Process
        try {
            length = std::stoi(length_string);
            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    while (true) {
        // Input
        std::cout << "Enter width (cm): ";
        std::cin >> width_string;

        // Process
        try {
            width = std::stoi(width_string);
            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    // Calls functions
    area(length, width);
    perimeter(length, width);
}
