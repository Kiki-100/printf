#include "holberton.h"
/**
 * _printf - receives all necessary arguments
 * @format: String containing all arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int mods;

if (format == NULL)
{
return (-1);
}
va_start(args, format);
int (*func_mod)(va_list);

mod_t  fmt_list[] = {
{"c", print_char},
{"i", print_digit},
{"d", print_digit},
{"s", print_string},
{"R", print_rot13},
{NULL, NULL}
};

mods = print_modifiers(format, args, fmt_list);
va_end(args);
return (mods);
}
