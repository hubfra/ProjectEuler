
/*
	Title:
		Lattice paths

	Description:
		Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, 
		there are exactly 6 routes to the bottom right corner.

		How many such routes are there through a 20×20 grid?
	Date:
		04-05-2020
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