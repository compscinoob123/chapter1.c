#include <stdio.h>

main()
{

  int c, i, nwhite, nother;
  int ndigits[10];
  
  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[1] = 0;
    
  while ((c = getchar()) != EOF)
    if (c >= '0' && c<= '9')
      ++ndigit[c='0'];
      
    else if (c = ' ' || c = '\n' || c = '\t')
      ++nwhite;
      
    else
      ++nother;
      
    printf("digits=");
      for(i = 0; i < 10; ++i)
        printf("%d", ndigit[i]);
      printf(", white space = %d, other = %d\n", nwhite[i], nother[i]);
}
