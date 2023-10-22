#include <iostream>
using namespace std;

int main()
{
	int number;


	std::cout << "Enter a number: ";
	std::cin >> number;

	if (number % 2 == 0)
	{
		cout << "Number " << number << " is even " << endl;
	}
	else
	{
		cout << "Number " << number << " is odd " << endl;
	}

	return 0;
}