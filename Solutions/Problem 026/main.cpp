
/*
	This is my solution to Problem 26 of Project Euler
	Link to problem: https://projecteuler.net/problem=26

	Author: Hubert Fraszczyk
	Date: 08-05-2020
*/


#include <iostream>
#include <unordered_map>


int RecurringCycleLength(int numerator, int denominator);

int main()
{
	int number = 0;
	int cycle_length = 0;
	int length;

	for (int a = 2; a < 1001; ++a) {
		length = RecurringCycleLength(1, a);
		if (length > cycle_length) {
			cycle_length = length;
			number = a;
		}
	}

	std::cout << "1 / " << number << " has " << cycle_length << "-digits long recurring cycle" << '\n';

	return 0;
}

int RecurringCycleLength(int n, int d)
{
	std::unordered_map<int, int> map;

	int a = 0;
	int digit;

	while(n != 0) {
		n *= 10;
		digit = static_cast<int>(n / d);

		if (map.find(n) != map.end()) return a - map[n];
		else map[n] = a;

		n %= d;
		++a;
	}

	return 0;
}