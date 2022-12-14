#include "main.h"
/**
*print_alphabet_x10 - prints alphabet 10 times
*
*Return: Always 0;
*
*/
void print_alphabet_x10(void)
{
char i;
char g;
for (i = 0; i <= 9; i++)
{
for (g = 'a'; g <= 'z'; g++)
{
_putchar(g);
}
_putchar('\n');
}
}
