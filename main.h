#ifndef HEADER
#define HEADER
/*import*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/*typedef printf*/
typedef struct _printf
{
	char all;
	int (*func)(va_list arguments);
} v_types;

/*function op.function*/
int print_char(va_list arguments);
int print_string(va_list arguments);
/* print_int */
void _abs(int *p);
int recu_num(int *dptr, char *s);
void print_num(int i, int neg, char *s);
void print_int_min(void);
int print_dec(va_list arguments);
/*function get.function*/
int get_func(va_list arguments, char c_type);
/*function printf*/
int _printf(const char *format, ...);
#endif
