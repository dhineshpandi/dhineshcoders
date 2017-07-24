#include <stdio.h>

void main()
{
    int n;

    printf("Enter a year: ");
    scanf("%d",&n);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
           if ( year%400 == 0)
                printf("%d is a leap year", n);
            else
                printf("%d is not a leap year", n);
        }
        else
            printf("%d is a leap year", n );
    }
    else
        printf("%d is not a leap year", n);
    
}
