#include "main.h"

/**
 *swap_int - swap two integers
 *@a: first integer
 *@b: second intger
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
