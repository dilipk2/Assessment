
#include<stdio.h>
#include<stdint.h>
int fact(int );
int main()

{
int n=5,f;
printf("enter a number to generate factorial");
f=fact(n);
printf("%d",f);
}
int fact(int a)
{
if(a==0)
{
return 1;
}
else
{
return (a*fact(a-1));
}
}
