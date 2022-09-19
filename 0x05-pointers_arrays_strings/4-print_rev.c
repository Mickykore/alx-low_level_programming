#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to be print in reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (s[i])
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}

