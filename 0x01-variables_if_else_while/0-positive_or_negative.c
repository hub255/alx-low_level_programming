#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print if the number is positive, zeor or negative
*
*Description: uses the main function
*Prints according to the number
*Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
