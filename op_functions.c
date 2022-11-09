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
 * Return: i
 */

int print_string(va_list arguments)
{
	int i;
	char *s;
	char n[]= "(null)";
	s = va_arg(arguments, char *);

	if (s == NULL)
	{
		for ( i = 0; n[i]; i++)
		{
			putchar(n[i]);
		}
	}
	else
	{
		for (i = 0; s[i]; i++)
		{
			putchar(s[i]);
		}
	}
	return (i);
}
