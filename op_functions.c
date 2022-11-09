#include "main.h"

/**
 * print_char - print char
 * @arguments: arguments
 * Return: 0
 */
int print_char(va_list arguments)
{
	int c;

	c = va_arg(arguments, int);
	putchar(c);
	return (0);
}

/**
 * print_string - print string
 * @arguments: arguments
 * Return: 0
 */

int print_string(va_list arguments)
{
	int i;
	char *s;
	s = va_arg(arguments, char *);
	for (i = 0; s[i]; i++)
	{
		if (s == NULL)
		{
			s = "(nil)";
			putchar(s[i]);
		}
		else
		{
			putchar(s[i]);
		}
	}
	return (i);
}
