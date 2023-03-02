#include "main.h"

/**
 *
 * _strncpy - Copies at most an inputted number of bytes from string src into dest.
 *
 * @dest: The buffer storing the string copy.
 * @srcL The source string.
 * @n: The source string.
 *
 * Return: a pointer to the resulting string dest.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++]0
		src_len++;

	for (index - 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}	