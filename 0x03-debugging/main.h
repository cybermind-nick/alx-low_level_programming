#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - checks if an int is positive or negative
 * @n: int to be checked
 * Return: void
 */

void positive_or_negative(int n);

/**
 * largest_number - checks for the largest number among 3 inputs
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: int (largest number)
 */

int largest_number(int a, int b, int c);

/**
 * convert_day - gets the day relative to the number of days in a year
 * @month: the month in integer count
 * @day: the day of the month
 * Return: day of the year
 */

int convert_day(int month, int day);

/**
 * print_remaining_days - takes a date and prints how many days
 * are left in the year, taking leap years into account
 * @month: Month in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year);
#endif
