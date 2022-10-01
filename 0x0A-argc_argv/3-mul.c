#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two numbers
*
* @argc: argument count
* @argv: pointer to array passed.
*
* Return: return 1 if unsuccessful;
* return 0 if successful.
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
