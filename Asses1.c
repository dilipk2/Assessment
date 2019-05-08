
#include<stdio.h>
#include<stdint.h>
int fact(int );
int main()

{
int n,f;
printf("enter a number to generate factorial");
scanf("%d",&n);106

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
