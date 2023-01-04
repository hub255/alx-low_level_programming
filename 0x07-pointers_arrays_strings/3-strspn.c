#include "main.h"
/**
* _strspn - search a string for a set of bytes
* @s: source string
* @accept: accepted string
*
* Return: number of bytes in the init segment
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int d = 0, b, x = 0;
while (accept[d])
{
b = 0;
while (s[b] != 32)
{
if (accept[d] == s[b])
{
x++;
}
b++;
}
d++;
}
return (x);
}
