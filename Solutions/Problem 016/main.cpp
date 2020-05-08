
/*
	Title:
		Power digit sum

	Description:
		2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

		What is the sum of the digits of the number 2^1000?

	Date:
		04-05-2020
*/


#include <iostream>
#include <string>


int main()
{
	std::string num = "1";

	long long sum;
	long long rem;


	for (int a = 0; a < 1000; ++a) {
		rem = 0;
		sum = 0;
		for (int b = 0; b < num.size(); ++b) {
			sum = num[b] - '0';
			sum = sum * 2 + rem % 10;
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
	for (char ch : num) sum_of_digits += ch - '0';

	std::cout << sum_of_digits << '\n';

	return 0;
}