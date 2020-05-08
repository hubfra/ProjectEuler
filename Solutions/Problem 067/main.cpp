
/*
	This is my solution to Problem 67 of Project Euler
	Link to problem: https://projecteuler.net/problem=67

	Author: Hubert Fraszczyk
	Date: 04-05-2020
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