// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program lets user to guess a number and see if it's correct

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    // This function lets user to guess a number and see if it's correct
    srand(time(NULL));
    int random_number = (rand_r() % 10);
    std::string guess_number;
    int  integerAsNumber;
    while (true) {
        // input
        std::cout << "Enter a number between 0 to 9: ";
        std::cin >> guess_number;
        std::cout << "" << std::endl;

        // process & output
        try {
            integerAsNumber = std::stoi(guess_number);
            if (integerAsNumber == random_number) {
                std::cout << "correct, good guess ";
                break;
            } else {
                std::cout << "Try Again ";
                std::cout << " ";
            }
      } catch (std::invalid_argument) {
        std::cout << "Invalid Number";
        std::cout << " ";
      }
}
}
