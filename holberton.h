#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *mod;
	int (*func_mod)(va_list);
} print_mod;

/* _printf.c prototypes */
int _printf(const char *format, ...);
/*int print_modifiers(const char *format, va_list argptr, mod_t *fmt_list);*/

/* mod_funcs.c prototypes */
int print_char(va_list cha);
int print_string(va_list str);
int print_digit(va_list digit);
int print_d(va_list d);
int print_unsigned(va_list unsign);
int print_b(va_list b);
int print_octal(va_list octa);
int print_hexadecimal(va_list hexa);/*prints in lower case*/
int print_X(va_list X); /*Prints alphabetical orders in caps*/
int print_adress(va_list p);/*used to print the address in a hexadecimal form.*/
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

int print_rot13(va_list );



/* _putchar.c prototype */
int _putchar(char c);

#endif
