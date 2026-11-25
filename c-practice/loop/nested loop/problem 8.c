#include<stdio.h>
int main()
{
    int n; 

    printf("Enter a integer input to print a pattern: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i ; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
}