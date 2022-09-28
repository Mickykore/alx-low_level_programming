#include "main.h"

/**
 * _strlen_recursion - function to evaluate string length
 * @s: string to be evaluated
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
int slen;
if (*s == '\0')
return (0);
else
{
slen = 1 + _strlen_recursion(s + 1);
return (slen);
}
}
