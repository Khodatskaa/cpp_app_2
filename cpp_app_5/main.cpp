#include <iostream>

int main()
{
	double number1, number2;

	std::cout << "Enter first number: ";
	std::cin >> number1;

	std::cout << "Enter second number: ";
	std::cin >> number2;

	if (number1 < number2)
	{
		std::cout << "Smaller number is " << number1 << std::endl;
	}
	else
	{
		std::cout << "Smaller number is " << number2 << std::endl;
	}
}