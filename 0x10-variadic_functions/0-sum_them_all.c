#include "variadic_functions.h"

/**
* sum_them_all - Calculates the sum of all parameters
*
* @n: number of parameters
*
* Return: return sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	double sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);
	return (sum);
}
