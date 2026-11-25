#include<stdio.h>
int main()
{
    int n, row; 

    printf("Enter a integer input to print a pattern: ");
    scanf("%d", &n);

    row = (n+1)/2;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row-i; j++)
        {
            printf("_");
        }
        for(int k=1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=row- 1; i>=1; i--)
    {
        for(int j=1; j<=row-i; j++)
        {
            printf("_");
        }
        for(int k=1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}