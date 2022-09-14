#include <unistd.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char output[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(output[i]);
	_putchar('\n');
	return (0);
}
