
/*
	This is my solution to Problem 31 of Project Euler
	Link to problem: https://projecteuler.net/problem=31

	Author: Hubert Fraszczyk
	Date: 09-05-2020
*/


#include <iostream>


int main()
{
	int diff_ways = 8; 
	// there are 8 different ways of making 2 pounds using only one type of coin
	// (one 2 pound coin, two 1 pound coins, four 50 pence coins etc.)

	for (int a = 0; a < 200; a += 100) { // 1 pound coin
		for (int b = 0; b < 200; b += 50) { // 50 pence coin
			for (int c = 0; c < 200; c += 20) { // 20 pence coin
				for (int d = 0; d < 200; d += 10) { // 10 pence coin
					for (int e = 0; e < 200; e += 5) { // 5 pence coin
						for (int f = 0; f < 200; f += 2) { // 2 pence coin
							for (int g = 0; g < 200; g += 1) { // 1 pence coin
								if (a + b + c + d + e + f + g == 200) diff_ways++;
							}
						}
					}
				}
			}
		}
	}

	std::cout << diff_ways << '\n';

	return 0;
}