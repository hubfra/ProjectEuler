
/*
	This is my solution to Problem 9 of Project Euler
	Link to problem: https://projecteuler.net/problem=9

	Author: Hubert Fraszczyk
	Date: 04-05-2020
*/


#include <iostream>


int main()
{
	int a, b, c;

	for (int n = 1; n < 1000; ++n) {
		for (int m = n + 1; m < 1000; ++m) {
			a = (m * m) - (n * n);
			b = 2 * m * n;
			c = (m * m) + (n * n);

			if (a + b + c == 1000) {
				std::cout << a * b * c << '\n';
				return 0;
			}
		}
	}

	return 0;
}