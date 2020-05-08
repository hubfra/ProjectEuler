
/*
	This is my solution to Problem 1 of Project Euler
	Link to problem: https://projecteuler.net/problem=1

	Author: Hubert Fraszczyk
	Date: 03-05-2020
*/


#include <iostream>


int main()
{
	int sum = 0;

	for (int a = 3; a < 1000; ++a) {
		if (a % 3 == 0 || a % 5 == 0) {
			sum += a;
		}
	}

	std::cout << sum << '\n';

	return 0;
}