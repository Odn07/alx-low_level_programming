#include "main.h"

/** main - check the code
*
* Return: Always 0.
*/

int main(void)
{
	char s[] = {
	"Expectthebest.Preparefortheworst.Capitalizeonwhatcomes.\nhelloworld!hello-world0123456hello world\thello world.hello world\n"};
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

