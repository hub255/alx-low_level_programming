#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
*print_to_98 - print numbers
*
*@j: compare with j
*Return: number followed by space
*/
void print_to_98(int j)
{
int i;
if (j > 98)
{
      
      for (i = j; i >= 98; i--)
	
	{
	  
	  printf("%d", i);
	  
	  if (i != 98)
	    
	    {
	      
	      printf(", ");
	      
	    }
	  
	}
      
    }
  
  else
    
    {
      
      for (i = j; i <= 98; i++)
	
	{
	  
	  printf("%d", i);
	  
	  if (i != 98)
	    
	    {
	      
	      printf(", ");
	      
	    }
	  
	}
      
    }
  
  printf("\n");
  
}
