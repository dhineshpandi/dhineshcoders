#include<stdio.h>
void main()
{
int base,expo;
long long result=1;
printf("enter a base value");
scanf("%d",&base);
printf("enter a exponent value");
scanf("%d",&expo);
while(expo!=0)
{
result=result*base;
expo--;
}
printf("Answer = %lld", result);
}



