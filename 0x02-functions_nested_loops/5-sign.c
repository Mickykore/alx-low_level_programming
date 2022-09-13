#include "main.h"

/**
 * print_sign - check lower case character
 * @n:  the character to be checked
 * Return: 1 if n is greater than 0
 * 0 if n is equal to 0
 * -1 if n is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
