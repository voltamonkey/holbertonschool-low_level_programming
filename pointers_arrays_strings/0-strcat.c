#include "main.h"

/**
 *_strcat - concatenates two strings.
 * @dest : pointer
 * @src : pointer 2
 * Return : Always 0
*/

char *_strcat(char *dest, char *src)
{
	int h, w;

	for (h = 0; dest[h] != '\0'; h++)
		;
	for (w = 0; src[w] != '\0' ; w++)
	{
		dest[h] = src[w];
	}
    return (dest);
}
