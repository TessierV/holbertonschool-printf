#include "main.h"
/**
 *print_char - print char
 *@arguments: arguments
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - integers
 * @arguments: arguments
 */
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - float
 * @arguments: arguments
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - string
 * @arguments: arguments
 */
void print_string(va_list arguments)
{
	char *args = va_arg(arguments, char*);

	if (args == NULL)
	{
		printf("%p", args);
		return;
	}
	printf("%s", args);
}
