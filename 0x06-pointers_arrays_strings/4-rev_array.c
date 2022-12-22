#include "main.h"
#include <stdio.h>
/**
* reverse_array - Reverses the content of an array of integers
* @a: An array of integers
* @n: Number of elements to swap
*
* Return: empty
*/
void reverse_array(int *a, int n)
{
int *b, i, temp, j;
b = a;
for (i = 1; i < n; i++)
{
b++;
}
for (j= 0; j < i / 2; j++)    
{
temp = a[j];
a[j] = *b;
*b = temp;
b--;
}
}
