#include "main.h"

/**
 * get_func - print all arguments
 * @arguments: arguments inside the va_list
 * @c_type: types inside print tab
 * Return: 0
 */

int get_func(va_list arguments, char c_type)
{
	int i;
	v_types print[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_dec},
		{'i', print_dec}
	};
	i = 0;

	while (print[i].all)
	{
		if (print[i].all == c_type)
		{
			return (print[i].func(arguments));
		}
		i++;
	}
	putchar('%');
	putchar(c_type);
	return (2);
}
