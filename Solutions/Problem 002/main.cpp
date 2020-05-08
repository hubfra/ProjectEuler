
/*
	This is my solution to Problem 2 of Project Euler
	Link to problem: https://projecteuler.net/problem=2

	Author: Hubert Fraszczyk
	Date: 03-05-2020
*/


#include <iostream>


int main()
{
	int sum = 2;

	int previous_val = 1;
	int current_val = 2;
	int new_val;

	while (current_val < 4000000) {
		new_val = previous_val + current_val;
		previous_val = current_val;
		current_val = new_val;

		if (current_val % 2 == 0) sum += current_val;
	}

	std::cout << sum << '\n';

	return 0;
}