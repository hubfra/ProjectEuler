
/*
	This is my solution to Problem 7 of Project Euler
	Link to problem: https://projecteuler.net/problem=7

	Author: Hubert Fraszczyk
	Date: 04-05-2020
*/


#include <iostream>


bool IsPrime(int number);

int main()
{
	int prime_index = 0;
	int number = 1;

	while (prime_index != 10001) {
		number++;

		if (IsPrime(number)) 
			prime_index++;
	}

	std::cout << number << '\n';

	return 0;
}

bool IsPrime(int n)
{
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;

	int sqrt_n = static_cast<int>(sqrt(n) + 1.0);
	for (int a = 3; a < sqrt_n; a += 2) {
		if (n % a == 0) return false;
	}

	return true;
}