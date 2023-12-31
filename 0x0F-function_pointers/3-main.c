#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int first, second;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	operation = argv[2];
	second = atoi(argv[3]);
	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operation == '/' && second == 0) ||
	    (*operation == '%' && second == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operation)(first, second));

	return (0);
}
