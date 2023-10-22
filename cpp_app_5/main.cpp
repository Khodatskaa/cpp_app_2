#include <iostream>

int main()
{
	int number;
	std::cout << "Enter a four-digit number: ";
	std::cin >> number;

	if (number < 1000 || number > 9999)
	{
		std::cout << "Error, please enter a four-digit number." << std::endl;
	}
	else
	{
		int firstDigit = (number / 1000) % 10;
		int secondDigit = (number / 100) % 10;
		int thirdDigit = (number / 10) % 10;
		int fourthDigit = number % 10;

		int newNumber = (thirdDigit * 1000) + (fourthDigit * 100) + (firstDigit * 10) + secondDigit;

		std::cout << "New number: " << newNumber << std::endl;
	}

	return 0;
}