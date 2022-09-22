#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: pointer to the resulting string (success)
 */

char *_strcat(char *dest, char *src)
{
	int ind = 0;
	int dest_length = 0;

	while (dest[ind++])
		dest_length++;
	for (ind = 0; src[ind]; ind++)
		dest[dest_length++] = src[ind];
	return (dest);
}
