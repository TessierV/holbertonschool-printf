#include "main.h"
#include <limits.h>

/**
 * _abs - print decimal
 * @p: pointer
 * Return: 0
 */

void _abs(int *p)
{
	if (*p < 0)
		*p = (*p * (-1));
}


/**
 * recu_num - recup num
 * @dptr: pointer
 * @s: pointer
 * Return: i
 */

int recu_num(int *dptr, char *s)
{
	int g = 0;
	int i;

	for (i = 0; *dptr > 0; i++)
	{
		g = *dptr % 10;
		s[i] = g + '0';
		*dptr /= 10;
	}
	return (i);
}

/**
 * print_num - print int
 * @i: int
 * @neg: negatif numb
 * @s: pointer
 * Return: 0
 */
void print_num(int i, int neg, char *s)
{
	if (neg == 1)
		putchar('-');
	for (; i >= 0 ; i--)
	{
		putchar (s[i]);
	}
}


/**
 * print_int_min - print decimal
 *
 * Return: 0
 */

void print_int_min(void)
{
	putchar('-');
	putchar('2');
	putchar('1');
	putchar('4');
	putchar('7');
	putchar('4');
	putchar('8');
	putchar('3');
	putchar('6');
	putchar('4');
	putchar('8');
}


/**
 * print_dec - print decimal
 * @arguments: arguments
 * Return: 0
 */

int print_dec(va_list arguments)
{
	int d; /* nombre */
	int i; /* counter || lenght */
	int neg = 0; /* test number negatif */
	int *dptr; /* pointer to d */
	char *s; /* pointer to array of char */

	dptr = &d;
	d = va_arg(arguments, int);
	s = malloc(sizeof(char) * 10);
	if (s == NULL)
	{
		free(s);
		return (0);
	}
	if (d < 0)
		neg = 1;
	if (d == INT_MIN)
	{
	print_int_min();
	free(s);
	return (11);
	}
	_abs(dptr);
	i = recu_num(dptr, s);
	print_num(i, neg, s);
	free(s);
	return (i);
}
