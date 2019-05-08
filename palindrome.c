#include<stdio.h>

main()
{
    int num,n,count=0,ret_value;
    printf("enter more than 3 digit number\n");
    n=121;
    n=num;
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

   int sum=0,rem=0;
   for(int i=1;i<=c;i++)
   {
   rem=n%10;
   sum=sum*10+rem;
   n=n/10;
   }
   return sum;
}
