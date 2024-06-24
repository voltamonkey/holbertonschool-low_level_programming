#include "main.h"
#include <stdio.h>

/**
 * strlen - returns to string.
 * @str: the string of length.
 *
 * Return: the length of @str.
 */
 int -strlen(char *str)
 {
        size_t length = 0;

		while (*str++)
		        length++;

       return (length);
}
