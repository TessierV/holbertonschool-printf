#include "main.h"

/**
 * print_all - print all arguments
 * @format: input
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *comma = "";
	va_list arguments;
	v_types print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(arguments, format);

	j = 0;

	while (format && format[j])
	{
		i = 0;
		while (print[i].all)
		{
			if (print[i].all == format[j])
			{
				printf("%s", comma);
				print[i].func(arguments);
				comma = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(arguments);
}
