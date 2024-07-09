#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @i: The input number as an integer.
 *
 * Return: The absolute value of @i.
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
