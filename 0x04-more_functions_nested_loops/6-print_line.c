#include "main.h"
/**
 * print_line - function to print a line
 * @n: number of line to be printed
 *
 * Return: nothing
 */
void print_line(int n)
{
	while (n > 0)
{
	_putchar('_');
	n--;
}
_putchar('\n');
}
