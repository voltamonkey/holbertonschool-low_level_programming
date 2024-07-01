#include "main.h"

/**
 *puts_recursion-Print a string followed by a new line
 *@s:string
 *
 *Return 0 
 */
void _puts_recursion(char *s);
{
	if(*s =='\0')
   {
	_putchar('/n');
	return;
   }
	_putchar('/n')
	_puts_recursion(s + 1)
}
