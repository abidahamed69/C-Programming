/*

Program that will decide whether a year is leap year or not.
Yes, if ( Year % 4 == 0 && year % 100 != 0 ) || ( Year % 400 ==0 )


*/

#include<stdio.h>
int main()
{
    int a;

    printf("Enter a year to verify wheathe the year is leap year or not: ");
    scanf("%d", &a);

    if((a%4==0 && a%100!=0) || (a%400 == 0))
    {
        printf("This is a leap year.\n");
    }
    else
    {
        printf("This not a leap year");
    }

    return 0;
}