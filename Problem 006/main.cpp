
/*
	Title:
		Sum square difference

	Description:
		The sum of the squares of the first ten natural numbers is,
					1^2 + 2^2 + ... + 10^2 = 385
		The square of the sum of the first ten natural numbers is,
					(1 + 2 + ... + 10)^2 = 55^2 = 3025
		Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
					3025 - 385 = 2640

		Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

	Date:
		04-05-2020
*/


#include <iostream>


int main()
{
	int sum_of_squares = 0;
	int square_of_sum = 0;

	for (int a = 1; a < 101; ++a) {
		sum_of_squares += a * a;
	}

	for (int a = 1; a < 101; ++a) {
		square_of_sum += a;
	}
	square_of_sum *= square_of_sum;


	std::cout << square_of_sum - sum_of_squares << '\n';

	return 0;
}