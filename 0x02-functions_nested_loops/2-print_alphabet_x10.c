#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10x
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
char j = 'a';
int i = 1;
while (i <= 10)
{
while (j <= 'z')
{
_putchar(j);
j++;
}
i++;
_putchar('\n');
}
}
