#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	char *len = s;

	while (*len)
		len++;
	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n')
}
