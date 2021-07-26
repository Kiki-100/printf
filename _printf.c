#include "holberton.h"
/**
 * _printf - receives all necessary arguments
 * @format: String containing all arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	mod_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list argptr;

	if (format == NULL)
		return (-1);

	va_start(argptr, format);
	/*Calling parser function*/
	printed_chars = parser(format, f_list, argptr);
	va_end(argptr);
	return (printed_chars);
}
