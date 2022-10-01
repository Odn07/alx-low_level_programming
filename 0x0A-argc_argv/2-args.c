#include <stdio.h>

/**
* main - Print all argument passed.
*
* @argc: argument count.
* @argv: pointer to array of argument passed
*
* Return: Always 0.
*/

int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


