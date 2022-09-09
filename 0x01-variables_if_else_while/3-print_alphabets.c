#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, C;
for (c = 'a'; c <= 'z'; ++c)
{
for (C = 'A'; C <= 'Z'; ++C)
{
putchar(C);
}
putchar(c);
}
putchar('\n');
return (0);
}
