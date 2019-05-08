#include<stdio.h>
main()
{
  int n, f1=0, f2=1,f3,c;
  printf("Enter the number of terms\n");
  n=10;
  
  printf("First %d terms of Fibonacci series are:\n",n);
  for(c=0; c<n; c++)
  {
    if(c<=1)
      f3=c;
    else
    {
      f3=f1+f2;
      f1=f2;
      f2=f3;
    }
    
    printf("%d\n",f3);
   }
 }
