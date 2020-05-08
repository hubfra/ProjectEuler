
/*
	This is my solution to Problem 24 of Project Euler
	Link to problem: https://projecteuler.net/problem=24

	Author: Hubert Fraszczyk
	Date: 05-05-2020
*/


#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
	std::vector<int> num{ 0,1,2,3,4,5,6,7,8,9 };

	for (int a = 1; a < 1000000; ++a) {
		std::next_permutation(num.begin(), num.end());
	}

	for (int x : num) std::cout << x;

	std::cout << '\n';

	return 0;
}