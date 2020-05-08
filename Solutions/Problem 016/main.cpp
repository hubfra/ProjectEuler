
/*
	This is my solution to Problem 16 of Project Euler
	Link to problem: https://projecteuler.net/problem=16

	Author: Hubert Fraszczyk
	Date: 04-05-2020
*/


#include <iostream>
#include <string>


int main()
{
	std::string num = "1";

	long long sum;
	long long rem;


	for (int a = 0; a < 1000; ++a) {
		rem = 0;
		sum = 0;
		for (int b = 0; b < num.size(); ++b) {
			sum = num[b] - '0';
			sum = sum * 2 + rem % 10;
			num[b] = (sum % 10) + '0';
			rem += sum - (sum % 10);
			rem /= 10;
		}

		while (rem) {
			num.push_back((rem % 10) + '0');
			rem /= 10;
		}
	}


	int sum_of_digits = 0;
	for (char ch : num) sum_of_digits += ch - '0';

	std::cout << sum_of_digits << '\n';

	return 0;
}