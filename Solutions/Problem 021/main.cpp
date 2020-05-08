
/*
	This is a solution to Problem 21 of Project Euler
	Link to problem: https://projecteuler.net/problem=21

	Author: Hubert Fraszczyk
	Date: 05-05-2020
*/


#include <iostream>
#include <vector>


int SumOfDivisors(int number);

int main()
{
	int sum_of_amicables = 0;

	for (int a = 2; a < 10000; ++a) {
		int d_a = SumOfDivisors(a);
		int d_b = SumOfDivisors(d_a);

		if (d_b == a && d_a != a) sum_of_amicables += a;
	}

	//std::cout << SumOfDivisors(220) << '\n';
	//std::cout << SumOfDivisors(284) << '\n';


	std::cout << sum_of_amicables << '\n';

	return 0;
}


int SumOfDivisors(int n)
{
	int sum = 0;

	int sqrt_n = sqrt(n) + 1;
	for (int a = 1; a < sqrt_n; ++a) {
		if (n % a == 0) {
			sum += a;
			int c = n / a;
			if (c != a && c != n) {
				sum += c;
			}
		}
	}

	return sum;
}