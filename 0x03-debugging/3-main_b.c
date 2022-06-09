#include "main.h"
#include <stdio.h>

/**
 * main -  takes a date and prints how many days are left in the year, taking
 * leap year into account
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	mont = 03;

	day = 29;

	year = 200;


	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
