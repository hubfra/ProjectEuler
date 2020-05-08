
/*
	Title:
		Special Pythagorean triplet

	Description:
		A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
					a^2 + b^2 = c^2

		For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

		There exists exactly one Pythagorean triplet for which a + b + c = 1000.
		Find the product abc.

	Date:
		04-05-2020
*/


#include <iostream>


int main()
{
	int a, b, c;

	for (int n = 1; n < 1000; ++n) {
		for (int m = n + 1; m < 1000; ++m) {
			a = (m * m) - (n * n);
			b = 2 * m * n;
			c = (m * m) + (n * n);

			if (a + b + c == 1000) {
				std::cout << a * b * c << '\n';
				return 0;
			}
		}
	}

	return 0;
}