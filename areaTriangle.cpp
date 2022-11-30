// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Nov. 30, 2022
// This program calculates the area of a triangle

#include <iostream>

// calculates the area of the triangle
float CalcArea(float base, float height) {
    return ((base * height) / 2);
}

int main() {
    // initialize strings for user input
    std::string userBaseStr;
    std::string userHeightStr;

    // initialize required floats
    float userBaseFloat;
    float userHeightFloat;
    float area;

    // gets user input for base and height of the triangle
    std::cout << "Enter the base of your triangle (cm): ";
    std::cin >> userBaseStr;
    std::cout << "Enter the height of your triangle (cm): ";
    std::cin >> userHeightStr;

    // catch any errors with inputs
    try {
        userBaseFloat = stof(userBaseStr);
        userHeightFloat = stof(userHeightStr);

        // checks if either of the inputs is negative
        if ((userBaseFloat < 0) | (userHeightFloat < 0)) {
            std::cout << "Please enter a positive number\n";
        } else {
            // calls the function with the necessary parameters
            area = CalcArea(userBaseFloat, userHeightFloat);

            // displays the area
            std::cout << "The area of your triangle is: " << area << "cm²\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid positive number\n";
    }
}
