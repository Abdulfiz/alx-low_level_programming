#include "main.h"

/**
 * print-last-digit - return last digit of a number
 * @n: inputed number
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
		l = l * -1;
	_putchar(l + '0');
	return (l);
}
