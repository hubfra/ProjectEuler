
/*
	Title:
		Longest Collatz sequence

	Description:
		The following iterative sequence is defined for the set of positive integers:

			n -> n/2 (n is evel)
			n -> 3n + 1 (n is odd)

		Using the rule above and starting with 13, we generate the following sequence:

			13 -> 40 -> 20 -> 10 -> 5 -> -> 16 -> 8 -> 4 -> 2 -> 1

		It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
		Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

		Which starting number, under one million, produces the longest chain?

		NOTE: Once the chain starts the terms are allowed to go above one million.

	Date:
		04-05-2020
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