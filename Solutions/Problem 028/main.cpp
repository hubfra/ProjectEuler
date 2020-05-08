
/*
	This is my solution to Problem 28 of Project Euler
	Link to problem: https://projecteuler.net/problem=28

	Author: Hubert Fraszczyk
	Date: 08-05-2020
*/


#include <iostream>


int main()
{
	int sum = 1;
	int max_a = 1001 * 1001 + 1;

	int b = 0;
	for (int a = 1; a < max_a; a += b * 4) {
		b += 2;

		if (a + b     < max_a) sum += a + b;
		if (a + b * 2 < max_a) sum += a + b * 2;
		if (a + b * 3 < max_a) sum += a + b * 3;
		if (a + b * 4 < max_a) sum += a + b * 4;
	}

	std::cout << sum << '\n';

	return 0;
}