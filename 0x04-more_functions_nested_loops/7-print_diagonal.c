#include "main.h"
/**
 * print_diagonal - function to print a line
 * @n: number of line to be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
int tmp = n, i;
	if (n > 0)
	{
		while (n > 0)
{
			for (i = tmp - n; i > 0; i--)
		{
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		n--;
}
}
else
{
_putchar('\n');
}
}
