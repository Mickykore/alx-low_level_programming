#include "main.h"
/**
 * rev_string - print a string in reverse
 * @s: string to be print in reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int i, length, mid;
char tmp;
for (length = 0; s[length] != '\0'; length++)
{
i = 0;
mid = length / 2;
}
while (mid--)
{
tmp = s[length - i - 1];
s[length - i - 1] = s[i];
s[i] = tmp;
i++;
}
}
