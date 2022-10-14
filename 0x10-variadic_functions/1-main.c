#include "variadic_functions.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers("", 4, 6, 98, 210, 55);
	print_numbers(" ", 2, 3, 7);
	return (0);
}
