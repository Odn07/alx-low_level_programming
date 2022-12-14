#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by a newline
*
* @separator: string to be printed between numbers
* @n: intergers passed to the function
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int nums;

	va_start(ap, n);
	for (; i < n; i++)
	{
		nums = va_arg(ap, int);
		printf("%d", nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
