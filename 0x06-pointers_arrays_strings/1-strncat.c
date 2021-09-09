#include "main.h"
/**
 * _strncat - concatnate two strings
 * @dest: a string to concatenate
 * @src: a string to concatenate
 * @n: a number of string
 * Return: Always a (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i])
{
i++;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
