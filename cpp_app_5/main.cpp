#include <iostream>

int main()
{
	int max, number;

	std::cout << "Enter the first number: ";
	std::cin >> max;

	for (int i = 2; i <= 7; ++i)
	{
		std::cout << "Enter the " << i << "th number: ";
		std::cin >> number;
		if (number > max)
		{
			max = number;
		}
	}

	std::cout << "The maximum of the seven numbers is: " << max << std::endl;

	return 0;
}