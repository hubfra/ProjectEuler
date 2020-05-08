
/*
	Title:
		Factorial digit sum

	Description:
		n! means n * (n-1) * --- * 3 * 2 * 1

		For example, 10! = 10 * 9 * ... * 3 * 2 * 1 = 3628800,
		and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

		Find the sum of the digits in the number 100!

	Date:
		04-05-2020
*/


#include <iostream>
#include <string>


int main()
{
	std::string num{"1"};

	int sum, rem;

	for (size_t a = 2; a <= 100; ++a) {
		sum = 0;
		rem = 0;

		for (size_t b = 0; b < num.size(); ++b) {
			sum = (num[b] - '0') * a;
			sum += rem % 10;
			num[b] = (sum % 10) + '0';
			rem += sum - (sum % 10);
			rem /= 10;
		}

		while (rem) {
			num.push_back((rem % 10) + '0');
			rem /= 10;
		}
	}


	int sum_of_digits = 0;

	for (char ch : num) {
		sum_of_digits += (ch - '0');
	}


	std::cout << sum_of_digits << '\n';
	
	return 0;
}