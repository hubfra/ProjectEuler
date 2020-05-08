
/*
	Title:
		Smallest multiple

	Description:
		2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

		What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

	Date:
		04-05-2020
*/

/*
	My thinking process:
		if number is divisible by 18 and 20 it is also divisible by 15
		if number is divisible by 18 and 20 it is also divisible by 12
		if number is divisible by 20 it is also divisible by 10, 5, 4 and 2
		if number is divisible by 18 it is also divisible by 9, 6 and 3
		if number is divisible by 16 it is also divisible by 8
		if number is divisible by 14 it is also divisible by 7

		I only use multiples of 20 so i don't need to check if number is divisible by 20
		So I only need to check if number is divisible by 11, 13, 14, 16, 17, 18 and 19
		
*/

#include <iostream>


int main()
{
	unsigned long long num = 20;

	while (num < ULLONG_MAX) {
		if (num % 11 == 0 && num % 13 == 0 && num % 14 == 0 && num % 16 == 0 && num % 17 == 0 && num % 18 == 0 && num % 19 == 0) {
			std::cout << num;
			return 0;
		}
		else {
			num += 20;
		}
	}
	return 0;
}