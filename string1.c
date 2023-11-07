#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @str: string to calcolate it's length
 *
 * Return: int length
 */

int _strlen(char *str)
{
	int len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcmp - compare between two strings
 * @s1: first string
 * @s2: secound string
 *
 * Return: negative int if s1 < s2, possitive int if s1 > s2, zero if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffere
 * @src: source buffer
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (str);
}
