#include<stdio.h>
int main()
{
    int n;
    int i=1;
    printf("Enter a number to display a series upto N terms: ");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("%d", i);
        
        if(i<n)
        {
        printf(", ");
        }

        i++;
    }

    return 0;
    
}