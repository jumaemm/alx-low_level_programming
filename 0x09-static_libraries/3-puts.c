#include "main.h"

void _puts(char *s)
{
	_putchar(*(s + 1));
	s++;
}
