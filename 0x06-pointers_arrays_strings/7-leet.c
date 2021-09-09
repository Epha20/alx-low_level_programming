#include "main.h"
/**
 * leet - leet strings
 * @s: a string to leet
 * Return: Always a (Success)
 */
char *leet(char *s)
{
int i, j;
char leet[5] = {'a', 'e', 'o', 't', 'l'};
char leetencoded[5] = {'4', '3', '0', '7', '1'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == leet[j] || s[i] == (leet[j] - 32))
{
*(s + i) = leetencoded[j];
}
}
}
return (s);
}
