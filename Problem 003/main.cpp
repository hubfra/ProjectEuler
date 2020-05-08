
/*
	Title:
		Largest prime factor

	Description:
		The prime factors of 13195 are 5, 7, 13 and 29.
		
		What is the largest prime factor of the number 600851475143?

	Date:
		03-05-2020
*/


#include <iostream>


int main()
{
	long long number = 600851475143;
	long long largest_factor = 3;

	while (number != 1) {
		if (number % largest_factor == 0) {
			number /= largest_factor;
		}
		else {
			largest_factor += 2;
		}
	}

	std::cout << largest_factor << '\n';

	return 0;
}