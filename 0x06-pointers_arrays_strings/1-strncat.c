#include "main.h"
/**
* _strncat - Concatenates two strings
* @dest: The destination value
* @src: The source value
* @n: The limit of the concatenation
*
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int l = 0, j = 0;
while (dest[l])
{
l++;
}
while (j < n && src[j])
{
dest[l] = src[j];
l++;
j++;
}
dest[l + n + 1] = '\0';
return (dest);
}
