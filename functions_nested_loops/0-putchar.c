#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int n = 0;

	for (n = 0 ; n < 8 ; n++)
{
	_putchar(str[n]);
}
	_putchar('\n');
	return (0);
}
