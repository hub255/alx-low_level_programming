#include <stdio.h>
/**
* main - Prints the lowercase alphabet in reverse.
*
* Description: refers to main
* Return: Always 0.
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
