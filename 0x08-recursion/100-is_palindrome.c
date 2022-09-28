#include "main.h"

/**
 * strlen_recursion - return length of a string recursively
 * @s: input string
 * Return: Length of s
 */
int strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * palindrome_helper - compare chars in string
 * @s: string
 * @l: length of string
 * Return: 1 if equal, 0 otherwise
 */
int palindrome_helper(char *s, int l)
{
	if (*s != *(s + l))
	{
		return (0);
	}
	else if (*s == 0)
	{
		return (1);
	}
	return (palindrome_helper(s + 1, l - 2));
}
/**
 * is_palindrome - determine whether a string is a palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	input_length = strlen_recursion(s);
	return (palindrome_helper(s, input_length));
}
