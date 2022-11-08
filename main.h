#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/*type def*/
typedef struct _printf
{
	char all;
	void (*func)(va_list arguments);
} v_types;

/*function op.function*/
int print_char(va_list arguments);
int print_string(va_list arguments);
/*function get.function*/
int _printf(const char *format, ...);
#endif
