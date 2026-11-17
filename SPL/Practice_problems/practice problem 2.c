#include<stdio.h>
int main()
{
    int x;

    printf("Enter an integer number: ");
    scanf("%d", &x);

    if((x%2==0)&&(x%3==0))
    {
        printf("Divisible by Both");
    }
    else if(x%2==0)
    {
        printf("Divisible by 2 Only");
    }
    else if(x%3==0)
    {
        printf("Divisible by 3 Only");
    }
    else
    {
        printf("Not Divisible by 2 or 3");
    }
    
    return 0;
}