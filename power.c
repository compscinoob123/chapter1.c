#include <stdio.h>

int power(int m, int n);
/* This says that int expects two 'int' arguments and returns an 'int'. This function is called a FUNCTION PROTOTYPE
and it has to agree with definition and uses of power. If not, ERROR */


//testing power function real quick
main()
{

  int i;
  
  for (i = 0; i < 10; i++) 
    printf("%d %d %d \n", i, power(3, i), power(-2, i));
    
    return 0;
}


int power(int base, int n)
{

int i, p;

  p = 1;
  for(i = 1; i <=n; i++)
    p = p * base;
    
    return p;
}
