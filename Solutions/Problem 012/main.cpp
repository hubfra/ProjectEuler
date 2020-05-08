
/*
	This is my solution to Problem 12 of Project Euler
	Link to problem: https://projecteuler.net/problem=12

	Author: Hubert Fraszczyk
	Date: 04-05-2020
*/


#include <iostream>
#include <vector>

int FactorsAmount(long long number);

int main()
{
	long long triangle = 0;

	for (int a = 1; FactorsAmount(triangle) < 501; ++a) {
		triangle += a;
	}

	std::cout << triangle << '\n';

	return 0;
}

int FactorsAmount(long long n)
{
	int factors_amount = 1;

	long long sqrt_n = sqrt(n) + 1;
	long long last_factor = 1;

	for (int a = 2; a < sqrt_n; ++a) {
		if (n % a == 0) {
			++factors_amount;
			last_factor = a;
		}
	}

	if (n / last_factor == last_factor)
		factors_amount = (factors_amount * 2) - 1;
	else
		factors_amount *= 2;


	return factors_amount;
}