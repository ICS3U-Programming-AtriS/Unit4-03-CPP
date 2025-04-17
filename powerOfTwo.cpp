// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: April 16, 2025
// Program that gets a whole number from the user.
// It then shows the squared product of every number leading
// up to the user's number.

#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

int main() {
    // Get the user's input as a string
    std::string userInput;
    std::cout << "Enter a non-negative integer: ";
    std::getline(std::cin, userInput);

    try {
        size_t pos;
        // Convert the user's guess to an integer
        // pos will be equal to the length of the input converted
        int userNum = std::stoi(userInput, &pos);

        // REFUSE FLOATS
        if (pos != userInput.length()) {
            throw std::invalid_argument("NO FLOATS");
        }

        // Check if the user's number is positive (or 0)
        if (userNum >= 0) {
            // Loop from 0 to userNum
            for (int counter = 0; counter <= userNum; counter++) {
                // Calculate square product
                int product = pow(counter, 2);
                // Display square product
                // \u00b2 is the unicode for the squared symbol
                printf("%i\u00b2 = %i\n", counter, product);
            }
        } else {
            // Tell the user that the number can't be negative
            printf("Number must be a whole number!\n");
        }
    } catch (std::invalid_argument) {
        // Tell the user that their input wasn't an integer
        std::cout << userInput;
        std::cout << " is not an integer.\n";
    }
    // Program completion message
    printf("Thanks for playing!\n");
}
