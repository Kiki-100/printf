#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * check_specifier - checks valid specifier format
 * @format: any format specifier found when itaration occurs
 * Return: pointer to null pointer
 */
static int (*check_specifier(const char *format))(va_list)
{
unsigned int i;
/*w[] holds the array of the specifiers*/
print_mod w[] = {
{"cha", print_char},
{"str", print_string},
{"digit", print_digit},
{"d", print_d},
{"unsign", print_unsigned},
{"b", print_b},
{"octa", print_octal},
{"hexa", print_hexadecimal},
{"X", print_X},
{"p", print_adress},
{"S", print_S},
{"r", print_r},
{"R", print_R},
{NULL, NULL}
};
/*Iteration*/
for (i = 0; w[i].mod != NULL; i++)
{
if (*(w[i].mod) == *format)
{
break;
}
}
return (w[i].func_mod);
}
/**
 * _printf - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: number of arguments
 * Return: modifiers
 */
int _printf(const char *format, ...)
{
unsigned int i = 0;
unsigned int count = 0;
va_list args;
int (*func_mod)(va_list);

if (format == NULL)
{
return (-1);
}

va_start(args, format);
while (format[i])
{

for (; format[i] != '%' && format[i]; i++)
{
_putchar(format[i]);
count++;
}

if (!format[i])
return (count);
func_mod = check_specifier(&format[i + 1]);
if (func_mod != NULL)
{
count += func_mod(args);
i += 2;
continue;
}
if (!format[i + 1])
return (-1);
_putchar(format[i]);
count++;
if (format[i + 1] == '%')
i += 2;
else
i++;
}
va_end(args);
return (count);
}
