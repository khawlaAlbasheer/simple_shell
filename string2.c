#include "shell.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;
	if (dest == src || src == 0)
		return (dest);
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = 0;
	return (dest);
}
/**
 * _strdup - douplicates given string
 * @str: given string
 *
 * Return: a pointer to douplicated string
 */

char *_strdup(const char *str)
{
	int len;

	len = 0;
	char *rest;

	if (str == NULL)
		return (NULL);
	while (*str++)
		len++;
	rest = malloc(sizeof(char) * (len + 1));
	if (!rest)
		return (NULL);
	for (len++; len--;)
		rest[len] = *--str;
	return (rest);
}

/**
 * _puts - print a string
 * @str: string to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes a char
 * @c: printed char
 *
 * Return: 1: Success, -1: Fail
 */

int _putchar(char c)
{
	static int i;
	static char buf[W_BUF_SIZE];

	if (c == BUF_FLUSH || I >= W_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _strspn - check if a string is at the begining
 * @str1: string to search
 * @str2: the substring
 *
 * Return: address of next char of str1 or NULL
 */

char *_strspn(const char *str1, const char *str2)
{
	while (*str2)
	{
		if (*str2++ != *str1)
			return (NULL);
	}
	return ((char *)str1);
}
