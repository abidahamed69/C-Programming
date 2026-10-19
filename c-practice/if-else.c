/*
Today we are going to learn about if-else statement or conditions 
*/

#include<stdio.h>
int main()
{
    int a;

    printf("Enter an integer number to verify is the number positive or negetive: ");
    scanf("%d", &a);

    if (a>0)
    {
        printf("This number is a positive number\n");
    }
    else if (a<0)
    {
        printf("This number is a negetive number\n");
    }
    
    else
    {
        printf("This number is Zero\n");
    }

    return 0;
    
}

/*

In an if-else statement, 
after setting a condition inside `if()`, if I need to check more conditions, 
I can use `else if()`. I can use `else if()` as many times as I want, 
but `if()` can only be used once.

*/