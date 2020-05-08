
/*
	This is my solution to Problem 14 of Project Euler
	Link to problem: https://projecteuler.net/problem=14

	Author: Hubert Fraszczyk
	Date: 04-05-2020
*/


#include <iostream>


int main()
{
	long long chain_length = 0;
	long long num_with_longest_chain = 0;

	for (long long a = 2; a < 1000000; ++a) {

		long long terms = 1;
		long long num = a;

		while (num > 1) {
			terms++;
			if (num % 2 == 0) num >>= 1;
			else num = (3 * num) + 1;
		}

		if (terms > chain_length) {
			chain_length = terms;
			num_with_longest_chain = a;
		}
	}

	std::cout << num_with_longest_chain << '\n';

	return 0;
}