/*

Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.

*/

#include<stdio.h>
int main()
{
    int x,y,sum=1;
    int i=1;

    printf("Enter two numbers for (x to the power y): ");
    printf("\nEnter the value of x:");
    scanf("%d", &x);
    printf("\nEnter the value of y:");
    scanf("%d", &y);

    while (i<=y)
    {
        sum*=x;
        i++;
    }
    printf("%d", sum);
    
    return 0;
}