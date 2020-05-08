
/*
	This is my solution to Problem 15 of Project Euler
	Link to problem: https://projecteuler.net/problem=15

	Author: Hubert Fraszczyk
	Date: 04-05-2020
*/


#include <iostream>


int main()
{
	const int n = 21;
	long long grid[n][n]{ 0 };

	for (int a = 0; a < n; ++a) {
		grid[a][0] = 1;
		grid[0][a] = 1;
	}

	for (int a = 1; a < n; ++a) {
		for (int b = 1; b < n; ++b) {
			grid[a][b] = grid[a - 1][b] + grid[a][b - 1];
		}
	}

	std::cout << grid[n - 1][n - 1] << '\n';

	return 0;
}