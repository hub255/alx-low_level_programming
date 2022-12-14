#include "main.h"
#include "6-abs.c"
/**
*print_last_digit - print last git
*
*@j: character to compare
* Return: last digit
*/
int print_last_digit(int j)
{
_putchar('0' + _abs(j % 10));
return (_abs(j % 10));
}
