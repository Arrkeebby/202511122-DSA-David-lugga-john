#include <iostream>
#include <vector>

int main() {
    // 1. Initialize variables
    int chosenNumber = 7; 
    int userGuess = -1;   
    std::vector<int> attempts; 

    // 2. While loop for guessing
    while (userGuess != chosenNumber) {
        std::cout << "Enter a number: ";
        if (!(std::cin >> userGuess)) {
            break; 
        }

        // Save the value into the list
        attempts.push_back(userGuess);

        // 3. Compare the guess
        if (userGuess > chosenNumber) {
            std::cout << "Too high" << std::endl;
        } 
        else if (userGuess < chosenNumber) {
            std::cout << "Too low" << std::endl;
        } 
        else {
            std::cout << "Correct" << std::endl;
        }
    }

    // 4. Display all guesses using a for loop
    std::cout << "\nYour guess history:" << std::endl;
    for (size_t i = 0; i < attempts.size(); i++) {
        std::cout << "Attempt " << (i + 1) << ": " << attempts[i] << std::endl;
    }

    return 0;
}
