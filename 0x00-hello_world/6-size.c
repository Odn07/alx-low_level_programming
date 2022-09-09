#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{	char c;
	int i;
	float f;
	unsigned long int li;
	unsigned long long int lli;

	printf("Size of Char: %lu. \n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu. \n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu. \n", (unsigned long)sizeof(li));
	printf("Size of a float: %lu. \n", (unsigned long)sizeof(f));
	printf("Size of a long long int: %lu. \n", (unsigned long long)sizeof(lli));

	return (0);

}
