#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabet lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}

