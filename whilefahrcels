#include <stdio.h>

main()
{

/* The range of both int and float depends on the machine you are using; 16-bit ints, 
which lie between −32768 and +32767, are common, as are 32-bit ints. 
A float number is typically a 32-bit quantity, with at least six significant digits 
and magnitude generally between about 10−38 and 10+38. */

  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr+step;
    }
 }
