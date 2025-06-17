// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Apr. 30, 2025
/* This program calculates the
squared numbers up to the
user's desired whole number
with a for loop and checks. */

/* Include the cmath library for
the exponent function. */
#include <cmath>
/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the string library to
adhere to style guidelines. */
#include <string>

// Runs the main function.
int main() {
    // Declare the user whole number variable as a string.
    std::string userWholeNumberStr;

    // Ask the user to enter a whole number.
    std::cout << "\nEnter a whole number: ";
    // Store the input into the string.
    std::cin >> userWholeNumberStr;

    /* Try to validate and proceed 
    with the user's input. */
    try {
        /* Attempt to convert the entered string 
        into a float for further validation. */
        float userWholeNumberFloat = stof(userWholeNumberStr);

        /* Check if the float and its casted integer version
        are equal, meaning it is an integer, and check if the
        integer is a whole number. */
        if (userWholeNumberFloat == static_cast<int>(userWholeNumberFloat)
        && userWholeNumberFloat >= 0) {
            // Display a newline for spacing.
            std::cout << "\n";
            // Use a for loop to loop until the user's whole number.
            for (int counter = 0; counter <= userWholeNumberFloat; counter++) {
                // Determine the square result by squaring the counter.
                int squareResult = pow(counter, 2);
                // Display the squared expression.
                std::cout << counter << "^2 = "
                << squareResult << ".\n";
            }
        } else {
            /* Otherwise, the entered number
            is not specifically whole. */
            /* Display that the entered number
            is not a whole number. */
            std::cout << "\n" << userWholeNumberFloat
            << " is not a whole number.\n";
        }
    }
    /* Runs if stof() could not convert the
    user's string input into a float. */
    catch (std::invalid_argument) {
        /* Display to the user that they
        did not enter a whole number. */
        std::cout << "\n" << userWholeNumberStr
        << " is not a whole number.\n";
    }

    // Finally, thank the user for using this program.
    std::cout << "\nThanks for using this program!\n";
}
