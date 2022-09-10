#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
int c, c2;

for (c = 48; c <= 56; c++)
{
for (c2 = c + 1; c2 <= 57; c2++)
{
putchar(c);
putchar(c2);
if (c != 56 || c2 != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
