#include <stdio.h>
/**
* main - Prints all the numbers of base 16 in lowercase.
*
*Description: Refers to main
* Return: Always 0.
*/
int main(void)
{
int num;
char r;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (r = 'a'; r <= 'f'; r++)
putchar(r);
putchar('\n');
return (0);
}
