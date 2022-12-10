/*
* File: 4-print_alphabt.c
* Auth: Bobby
*/
#include <stdio.h>
/**
* main - Prints the alphabet in lowercase, except for q and e.
*
*Description: Refers to main
* Return: Always 0.
*/
int main(void)
{
char y;
for (y = 'a'; y <= 'z'; y++)
{
if (y != 'e' && y != 'q')
putchar(y);
}
putchar('\n');
return (0);
}
