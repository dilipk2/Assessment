#include<stdio.h>

main()
{
    int num,n=1221,count=0,ret_value;

    num=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d\n",count);

    ret_value=palindrome(num,count);

        printf("sum=%d\n",ret_value);

}

int palindrome(int n,int c)
{

   int sum=0,rem=0;
   for(int i=1;i<=c;i++)
   {
   rem=n%10;
   sum=sum+rem;
   n=n/10;
   }
   return sum;
}

