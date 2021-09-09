#include "main.h"
/**
 * string_toupper - change to upper case
 * @p: a string to change
 * Return: Always a (Success)
 */
char *string_toupper(char *p)
{
int a = 0;
while (p[a])
{
if (p[a] >= 97 && p[a] <= 122)
{
p[a] -= 32;
}
a++;
}
return (p);
}
