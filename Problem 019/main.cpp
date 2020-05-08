
/*
	Title:
		Counting Sundays

	Description:
		You are given the following information, but you may prefer to do some research for yourself.

				- 1 Jan 1900 was a Monday.
				- Thirty days has September,
				  April, June and November.
				  All the rest have thirty-one,
				  Saving February alone,
				  Which has twenty-eight, rain or shine.
				  And on leap years, twenty-nine.
				- A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

		How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

	Date:
		04-05-2020
*/

/*
	- 1 Jan 1901 was a Tuesday.
*/

constexpr int MONDAY = 1;
constexpr int TUESDAY = 2;
constexpr int WEDNESDAY = 3;
constexpr int THURSDAY = 4;
constexpr int FRIDAY = 5;
constexpr int SATURDAY = 6;
constexpr int SUNDAY = 7;


#include <iostream>
#include <vector>


int main()
{
	std::vector<int> days(36600, 0);

	for (int a = 0; a < 36600 - 7; a += 7) {
		days[a    ] = MONDAY;
		days[a + 1] = TUESDAY;
		days[a + 2] = WEDNESDAY;
		days[a + 3] = THURSDAY;
		days[a + 4] = FRIDAY;
		days[a + 5] = SATURDAY;
		days[a + 6] = SUNDAY;
	}

	int sundays = 0;
	int index = 0;

	for (int a = 1; a < 100; ++a) {
		if (days[index] == SUNDAY) ++sundays;
		index += 31;
		if (days[index] == SUNDAY) ++sundays;
		index += a % 4 == 0 ? 29 : 28;
		if (days[index] == SUNDAY) ++sundays;
		index += 31;
		if (days[index] == SUNDAY) ++sundays;
		index += 30;
		if (days[index] == SUNDAY) ++sundays;
		index += 31;
		if (days[index] == SUNDAY) ++sundays;
		index += 30;
		if (days[index] == SUNDAY) ++sundays;
		index += 31;
		if (days[index] == SUNDAY) ++sundays;
		index += 31;
		if (days[index] == SUNDAY) ++sundays;
		index += 30;
		if (days[index] == SUNDAY) ++sundays;
		index += 31;
		if (days[index] == SUNDAY) ++sundays;
		index += 30;
		if (days[index] == SUNDAY) ++sundays;
		index += 31;
	}

	std::cout << sundays << '\n';

	return 0;
}