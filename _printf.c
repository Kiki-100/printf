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

mod_t  fmt_list[] = {
{"c", print_char},
{"i", print_digit},
{"d", print_digit},
{"s", print_string},
{"u", print_u},
{"o", print_o},
{"x", print_x},
{"s", print_X},
{"R", print_rot13},
{NULL, NULL}
};


va_start(args, format);
if (format == NULL)
{
return (-1);
} 

mods = print_modifiers(format, args, fmt_list);

va_end(args);
return (mods);
}
