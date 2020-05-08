
/*
	This is my solution to Problem 27 of Project Euler
	Link to problem: https://projecteuler.net/problem=27

	Author: Hubert Fraszczyk
	Date: 08-05-2020
*/


#include <iostream>


bool PrimalityTest(int number);
int ConsecutivePrimes(int a, int b);

int main()
{
	int product = 0;
	int consecutive_primes = 0;

	for (int a = -999; a < 1000; ++a) {
		for (int b = -1000; b < 1001; ++b) {
			int p = ConsecutivePrimes(a, b);
			if (p > consecutive_primes) {
				consecutive_primes = p;
				product = a * b;
			}
		}
	}

	std::cout << product << '\n';

	return 0;
}

bool PrimalityTest(int number)
{
	if (number < 2) return false;
	if (number == 2) return true;

	int sqrt_number = sqrt(number) + 1;

	for (int a = 3; a < sqrt_number; a += 2) {
		if (number % a == 0) return false;
	}

	return true;
}

int ConsecutivePrimes(int a, int b)
{
	int n = 0;
	int consecutive_primes = 0;

	while (PrimalityTest((n * n) + (a * n) + b)) {
		++consecutive_primes;
		++n;
	}

	return consecutive_primes;
}