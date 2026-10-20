#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number to verify is this number positive or negetive: ");
    scanf("%d", &a);

    if (a>0)
    {
        printf("Positive");
    }
    else if (a<0)
    {
        printf("Negetive");
    }
    else
    {
        printf("Zero");
    }
    
    
}