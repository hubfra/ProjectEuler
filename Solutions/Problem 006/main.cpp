
/*
	This is my solution to Problem 6 of Project Euler
	Link to problem: https://projecteuler.net/problem=6

	Author: Hubert Fraszczyk
	Date: 04-05-2020
*/


#include <iostream>


int main()
{
	int sum_of_squares = 0;
	int square_of_sum = 0;

	for (int a = 1; a < 101; ++a) {
		sum_of_squares += a * a;
	}

	for (int a = 1; a < 101; ++a) {
		square_of_sum += a;
	}
	square_of_sum *= square_of_sum;


	std::cout << square_of_sum - sum_of_squares << '\n';

	return 0;
}