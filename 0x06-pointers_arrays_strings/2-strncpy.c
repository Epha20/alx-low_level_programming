#include "main.h"
/**
 * _strncpy - coppy strings
 * @dest: a string to coppy
 * @src: a string to coppy
 * @n: a number of string
 * Return: Always a (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int a, b;
b = 0;
while (src[b])
{
b++;
}
a = 0;
while (a < n && src[a])
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
