#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number
 *
 * Return: n % 10
 */
int print_last_digit(int n)
{
int lastnumber;
lastnumber = n % 10;
_putchar(lastnumber + '0');
return (lastnumber);
}
