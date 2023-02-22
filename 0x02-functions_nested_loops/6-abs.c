#include "main.h"

/**
 * _abs - function to print absolute value
 *
 * @a: function parameter checked
 *
 * Return: a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
