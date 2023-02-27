#include "main.h"

/**
 * swap_int - function to swap number
 * @a: function parameter
 * @b: function parameter
 * Return: 0
 *
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
