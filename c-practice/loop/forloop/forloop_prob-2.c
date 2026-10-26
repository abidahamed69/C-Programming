/*

Write a program (WAP) that will print following series upto Nth terms.
2,4,6,8,10,12,14,16,18,20,22........

*/


#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number to display how many even number will print: ");
    scanf("%d", &n);

    for(int i=2; i<=n; i++)
    {
        printf("%d", i);
        i+=1;

        if (i<n)
        {
            printf(", ");
        }
        
    }

    return 0;
}