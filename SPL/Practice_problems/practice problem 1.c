#include<stdio.h>
int main()
{
    int x,y, res1, res2;
     
    printf("Enter two integer number:");
    scanf("%d%d", &x,&y);

    res1 = x/y;
    res2 = x%y;

    printf("Quotient= %d\n Remainder= %d\n", res1, res2);

    if(res2==0)
    {
        printf("Exactly Divisible");
    }
    else if(res2!=0 && x>y)
    {
        printf("First Number is Larger");
    }
    else
    {
        printf("Second Number is Larger or Equal.");
    }

    return 0;

}