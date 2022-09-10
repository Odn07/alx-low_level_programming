#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char e = 'e';
	char q = 'q';

	for (x = 'a'; x <= 'z'; x++)
		{
			if (x != e && x != q)
				putchar(x);
		}
	putchar('\n');
	return (0);
}

