#include <stdio.h>
#include <string.h>
#include <unistd.>
/**
* main - UNIX is basically simple
*
*  Return: 0
*/
int main(void)
{
	int s;

	s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (0);

}
