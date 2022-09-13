#include "main.h"

/**
 * _islower - check lower case character
 * @c:  the character to be checked
 * Return: 1 if lower case
 * 0 otherwise
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}
}
