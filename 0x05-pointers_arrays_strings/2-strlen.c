#include "main.h"

/**
 * _strlen - a functionn returning string length
 *
 * @s: parameter to the function
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
