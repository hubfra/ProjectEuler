
/*
	This is my solution to Problem 5 of Project Euler
	Link to problem: https://projecteuler.net/problem=5

	Author: Hubert Fraszczyk
	Date: 03-05-2020
*/


#include <iostream>


int main()
{
	unsigned long long num = 20;

	while (num < ULLONG_MAX) {
		if (num % 11 == 0 && num % 13 == 0 && num % 14 == 0 && num % 16 == 0 && num % 17 == 0 && num % 18 == 0 && num % 19 == 0) {
			std::cout << num;
			return 0;
		}
		else {
			num += 20;
		}
	}
	return 0;
}