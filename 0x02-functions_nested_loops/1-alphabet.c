#include "main.h"

/**
 *  print_alphabet - print all alphabets in small case
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);

	_putchar('\n');
}
