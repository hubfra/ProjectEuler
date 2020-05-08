
/*
	This is my solution to Problem 18 of Project Euler
	Link to problem: https://projecteuler.net/problem=18

	Author: Hubert Fraszczyk
	Date: 04-05-2020
*/


#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
	std::vector<std::vector<int>> triangle{
		                            { 75 },
		                          { 95, 64 },
		                        { 17, 47, 82 },
		                      { 18, 35, 87, 10 },
		                    { 20,  4, 82, 47, 65 },
		                  { 19,  1, 23, 75,  3, 34 },
		                { 88,  2, 77, 73,  7, 63, 67 },
		              { 99, 65,  4, 28,  6, 16, 70, 92 },
		            { 41, 41, 26, 56, 83, 40, 80, 70, 33 },
		          { 41, 48, 72, 33, 47, 32, 37, 16, 94, 29 },
		        { 53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14 },
		      { 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57 },
		    { 91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48 },
		  { 63, 66,  4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31 },
		{  4, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60,  4, 23 }
	};

	for (int a = 1; a < triangle.size(); ++a) {
		triangle[a][0] += triangle[a - 1][0];
		triangle[a][a] += triangle[a - 1][a - 1];
	}

	for (int a = 2; a < triangle.size(); ++a) {
		for (int b = 1; b < triangle[a].size() - 1; ++b) {
			triangle[a][b] += std::max(triangle[a - 1][b - 1], triangle[a - 1][b]);
		}
	}

	int max = 0;

	for (int a = 0; a < triangle.back().size(); ++a) {
		max = std::max(max, triangle.back()[a]);
	}

	std::cout << max << '\n';

	return 0;
}