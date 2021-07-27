#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * struct modifiers - Defines a specifier to data types
 * @mod: type of data type
 * @func_mod: pointer to function that prints data types
 * according to their notation
 */
typedef struct modifiers
{
  char *mod;
  int (*func_mod)(va_list argptr);
} mod_t;

/* _printf.c prototypes */
int _printf(const char *format, ...);
int print_modifiers(const char *format, va_list argptr, mod_t *fmt_list);

/* mod_funcs.c prototypes */
int print_char(va_list argptr);
int print_digit(va_list argptr);
int print_string(va_list argptr);
int print_rot13(va_list argptr);

/* _putchar.c prototype */
int _putchar(char c);

#endif
