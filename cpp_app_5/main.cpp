#include <iostream>

int main() 
{
    int number;
    std::cout << "Enter a six-digit number: ";
    std::cin >> number;

    if (number < 100000 || number > 999999) {
        std::cout << "Error, please enter a six-digit number." << std::endl;
    }
    else {
        int firstPart = number / 1000;
        int secondPart = number % 1000;

        int sumFirstPart = (firstPart / 100) + ((firstPart / 10) % 10) + (firstPart % 10);
        int sumSecondPart = (secondPart / 100) + ((secondPart / 10) % 10) + (secondPart % 10);

        if (sumFirstPart == sumSecondPart) {
            std::cout << "The number is a happy number." << std::endl;
        }
        else {
            std::cout << "The number is not a happy number." << std::endl;
        }
    }

    return 0;
}
