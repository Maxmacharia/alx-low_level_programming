#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *string, *cpp = "";

	va_list catalogue;

	va_start(catalogue, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", cpp, va_arg(catalogue, int));
					break;
				case 'i':
					printf("%s%d", cpp, va_arg(catalogue, int));
					break;
				case 'f':
					printf("%s%f", cpp, va_arg(catalogue, double));
					break;
				case 's':
					string = va_arg(catalogue, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", cpp, string);
					break;
				default:
					a++;
					continue;
			}
			cpp = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(catalogue);
}
