#include<stdio.h>

main()
{
    int num,n,count=0,ret_value;
    printf("enter more than 3 digit number\n");
    n=1221;
    num=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d\n",count);

    ret_value=palindrome(num,count);

    if(ret_value==num)
    {
        printf("given num is palindrome\n");
    }
    else
    {
        printf("not palindrome");
    }
}

int palindrome(int n,int c)
{

   int sum=0,rem,i;
   for(i=1;i<=c;i++)
   {
   rem=n%10;
   sum=sum*10+rem;
   n=n/10;
   }
   return sum;
}
