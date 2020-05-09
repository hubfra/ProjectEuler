
/*
	This is my solution to Problem 30 of Project Euler
	Link to problem: https://projecteuler.net/problem=30

	Author: Hubert Fraszczyk
	Date: 09-05-2020
*/


#include <iostream>
#include <cmath>


bool check(int number);

int main()
{
	long long sum = 0;

	for (int a = 2; a < 1000001; ++a) {
		if (check(a)) sum += a;
	}

	std::cout << sum << '\n';

	return 0;
}

bool check(int number)
{
	int num = number;
	int sum = 0;

	while (num) {
		int digit = num % 10;
		sum += pow(digit, 5);
		num /= 10;
	}

	return sum == number;
}