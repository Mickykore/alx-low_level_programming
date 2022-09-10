#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
int c, c2, c3;
for (c = 48; c <= 55; c++)
{
for (c2 = c + 1; c2 <= 56; c2++)
{
for (c3 = c2 + 1; c3 <= 57; c3++)
{
putchar(c);
putchar(c2);
putchar(c3);
if (c != 55 || c2 != 56 || c3 != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
