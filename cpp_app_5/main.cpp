#include <iostream>

int main()
{
	double number1, number2;

	std::cout << "Enter first number: ";
	std::cin >> number1;

	std::cout << "Enter second number: ";
	std::cin >> number2;

	if (number1 == number2)
	{
		std::cout << "The numbers are equal" << std::endl;
	}
	else
	{
		std::cout << "The numbers in growing order: ";
		if (number1 < number2)
		{
			std::cout << number1 << " " << number2 << std::endl;
		}
		else
		{
			std::cout << number2 << " " << number1 << std::endl;
		}
	}
	return 0;
}