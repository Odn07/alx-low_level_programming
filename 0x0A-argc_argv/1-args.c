#include <stdio.h>

/**
* main - Count number of argument passed into the program.
*
* @argc: argument count
* @argv: pointer to array of argument passed.
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	if (argv[i])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
