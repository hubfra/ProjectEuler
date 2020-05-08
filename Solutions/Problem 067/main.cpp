
/*
	Title:
		Maximum path sum II

	Description:
		By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.

								   3
								  7 4
								 2 4 6
								8 5 9 3

		That is, 3 + 7 + 4 + 9 = 23.

		Find the maximum total from top to bottom in triangle.txt, 
		a 15K text file containing a triangle with one-hundred rows.

		NOTE: This is a much more difficult version of Problem 18. 
		It is not possible to try every route to solve this problem, as there are 299 altogether! 
		If you could check one trillion (1012) routes every second it would take over twenty billion years to check them all. 
		There is an efficient algorithm to solve it. ;o)

	Date:
		04-05-2020
*/


#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>


int main()
{
	std::vector<std::vector<int>> triangle;

	std::ifstream file("triangle.txt");

	while (!file.eof()) {
		std::string s;
		std::getline(file, s);

		std::stringstream ss;
		ss << s;
		std::vector<int> row;

		int num;
		while (ss >> num) row.push_back(num);

		triangle.push_back(row);
	}

	file.close();


	for (size_t a = 1; a < triangle.size(); ++a) {
		triangle[a][0] += triangle[a - 1][0];
		triangle[a][a] += triangle[a - 1][a - 1];
	}

	for (size_t a = 2; a < triangle.size(); ++a) {
		for (size_t b = 1; b < triangle[a].size() - 1; ++b) {
			triangle[a][b] += std::max(triangle[a - 1][b - 1], triangle[a - 1][b]);
		}
	}

	int max = 0;

	for (size_t a = 0; a < triangle.back().size(); ++a) {
		max = std::max(max, triangle.back()[a]);
	}

	std::cout << max << '\n';

	return 0;
}