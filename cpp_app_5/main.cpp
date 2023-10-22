#include <iostream> 

int main()
{
	double number;

	std::cout << "Enter number: ";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "The number " <<number<< " is positive" << std::endl;
	}
	else if (number < 0)
	{
		std::cout << "The number " << number << " is negative" << std::endl;
	}
	else
	{
		std::cout << "The number is zero." << std::endl;
	}
}