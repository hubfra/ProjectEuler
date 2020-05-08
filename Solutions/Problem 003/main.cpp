
/*
	This is my solution to Problem 3 of Project Euler
	Link to problem: https://projecteuler.net/problem=3

	Author: Hubert Fraszczyk
	Date: 03-05-2020
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