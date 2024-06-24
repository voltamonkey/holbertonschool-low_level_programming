#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to standout.
 * @str: The string to be printed.
 */
void _:puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
