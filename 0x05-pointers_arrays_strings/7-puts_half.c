#include "main.h"
/**
 * puts_half - prints half of a string then a new line.
 * @str: string to be  printed
 * Return: void
 */
void puts_half(char *str)
{
	int i, m, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	m = (count - 1) / 2;
	for (i = m + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
