#include <unistd.h>

/**
 * main - Prints given statement
 * Return: 1
 */
int main(void)
{
	char dora[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, dora, 59);
	return (1);
}
