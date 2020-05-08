
/*
	This is a solution to Problem 22 of Project Euler
	Link to problem: https://projecteuler.net/problem=22

	Author: Hubert Fraszczyk
	Date: 05-05-2020
*/


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>


int main()
{
	std::ifstream file("names.txt");
	std::vector<std::string> names;
	std::string name;

	while(!file.eof()) {
		std::getline(file, name, ',');
		name.erase(name.begin());
		name.erase(name.end() - 1);
		names.push_back(name);
	}

	file.close();

	std::sort(names.begin(), names.end());

	long long sum_points = 0;

	for (int a = 0; a < names.size(); ++a) {
		long long points = 0;
		for (char ch : names[a]) {
			points += ch - 'A' + 1;
		}
		points *= (a + 1);
		sum_points += points;
	}

	std::cout << sum_points << '\n';

	return 0;
}