#include "main.h"
/**
 * _isdigit - checks for a digit(0 through 9)
 * @c: parameters to be checked
 * Return: Always 1 for success 0 for failure
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
