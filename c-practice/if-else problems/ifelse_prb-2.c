#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number to verify even or odd: ");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("Even number");
    }

    else
    {
        printf("Odd");
    }

    return 0;
    
}