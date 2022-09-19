#include "main.h"
/**
 * swap_int - function to swap two intigers.
 * @a: first intiger number to be swap
 * @b: second intiger to be swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

