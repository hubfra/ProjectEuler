
/*
	Title:
		Summation of primes

	Description:
		The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

		Find the sum of all the primes below two million.

	Date:
		04-05-2020
*/


#include <iostream>
#include <vector>


int main()
{
	std::vector<int> primes(2000000, 1);
	primes[0] = 0;
	primes[1] = 0;

	for (int a = 2; a < primes.size() / 2; ++a) {
		if (primes[a]) {
			for (int b = a * 2; b < primes.size(); b += a) {
				primes[b] = 0;
			}
		}
	}

	unsigned long long sum = 0;

	for (int a = 0; a < primes.size(); ++a) {
		if (primes[a]) sum += a;
	}

	std::cout << sum << '\n';

	return 0;
}