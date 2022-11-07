#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/*type def*/
typedef struct print_all
{
	char all;
	void (*func)(va_list arguments);
} v_types;

/*function op.function*/
void print_char(va_list arguments);
void print_int(va_list arguments);
void print_float(va_list arguments);
void print_string(va_list arguments);
/*function get.function*/
void print_all(const char * const format, ...);
#endif
