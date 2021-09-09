#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: a string to compare
 * @s2: a string to compare
 * Return: Always a (Success)
 */
int _strcmp(char *s1, char *s2)
{
int a, b, c, d = 0, e;
a = 0;
while (s1[a])
{
a++;
}
b = 0;
while (s2[b])
{
b++;
}
if (a <= b)
{
e = a;
}
else
{
e = b;
}
c = 0;
while (c <= e)
{
if (s1[c] == s2[c])
{
c++;
continue;
}
else
{
d = s1[c] - s2[c];
break;
}
c++;
}
return (d);
}
