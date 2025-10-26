#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: nothing (void)
 */
void print_alphabet(void)
{
	char letter;  /* déclaration de la variable */

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');  /* saut de ligne à la fin */
}

