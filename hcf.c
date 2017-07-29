

#include<stdio.h>
int hcf(int x,int y);
void main()
{
    int a,b,d;
    clrscr();
    printf("Enter 2 Numbers : ");
    scanf("%d%d",&a,&b);
    if(a>b)
      {
           d=hcf(a,b);
      }
    else
     {
           d= hcf(b,a);
     }
           printf("HCF is= %d",d);
           getch();
}
    int hcf(int x,int y)
    {
       int r=1;
       while(r!=0)
          {
               r=x%y;
               x=y;
               y=r;
          }
               return(x);
    } 

Calculate HCF of 2 Numbers using Functions
