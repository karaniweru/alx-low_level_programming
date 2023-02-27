#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
