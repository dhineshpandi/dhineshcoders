#include<stdio.h>
void main()
{
    int num,n,r,sum=0;
    printf("enter a value");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
    r=n%10;
    sum=(sum*10)+r;
    n/=10;
}
if(num==sum)
{
       printf("%d is a palindrome.", num);
}
    else
    {
        printf("%d is not a palindrome.", num);
    }
}
