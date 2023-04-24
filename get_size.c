#include "main.h"
/**
 * get_size - function calculates size so as to cast argument.
 * @format: string that is formatted so as to print argument.
 * @i: list of arguments to be printed.
 * Return: precision
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == '|')
		size = S_LONG ;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
