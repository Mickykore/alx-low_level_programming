#include "main.h"
/**
 * more_numbers - print 0 to 14 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 14; j++)
{
		if (i > 9)
{
		_putchar(i / 10 + '0');
}
	_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
