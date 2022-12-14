#include "main.h"

/**
 * strlen_recursion - return length of a string recursively
 * @y: input string
 * Return: Length of y
 */
int strlen_recursion(char *y)
{
	if (*y != '\0')
	{
		return (1 + strlen_recursion(y + 1));
	}
	return (0);
}

/**
 * palindrome_helper - compare chars in string
 * @x: input string
 * @l: length of string
 * Return: 1 if equal, 0 otherwise
 */
int palindrome_helper(char *x, int l)
{
	if (*x != *(x + l))
	{
		return (0);
	}
	else if (*x == 0)
	{
		return (1);
	}
	return (palindrome_helper(x + 1, l - 2));
}
/**
 * is_palindrome - determine whether a string is a palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int input_length;

	if (*s == '\0')
	{
		return (1);
	}
	input_length = strlen_recursion(s);
	return (palindrome_helper(s, input_length - 1));
}
