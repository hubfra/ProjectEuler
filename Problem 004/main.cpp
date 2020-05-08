
/*
	Title:
		Largest palindrome product

	Description:
		A palindromic number reads the same both ways. 
		The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

		Find the largest palindrome made from the product of two 3-digit numbers.

	Date:
		03-05-2020
*/


#include <iostream>
#include <string>

bool IsPalindome(int number);

int main()
{
	int largest_palindrome = 0;

	for (int a = 999; a > 99; --a) {
		for (int b = 999; b > 99; --b) {
			if (int c = a * b; IsPalindome(c)) {
				if (c > largest_palindrome) {
					largest_palindrome = c;
				}
			}
		}
	}

	std::cout << largest_palindrome << '\n';

	return 0;
}

bool IsPalindome(int n)
{
	std::string s = std::to_string(n);
	int size = s.size();

	for (int a = 0; a < size; ++a) {
		if (s[a] != s[size - 1 - a]) {
			return false;
		}
	}

	return true;
}