#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
	char s[] = "Expectthebest.\nhelloworld!\thello world. world\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

