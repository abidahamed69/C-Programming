/*

Write a program (WAP) that will give the sum of first Nth terms for the following series.

*/

#include<stdio.h>
int main()
{
    int n, sum=0;

    printf("Enter how many terms of series do you want to sum: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            sum-=i;
        }
        else
        {
            sum+=i;
        }
    }
    printf("The sum of %dth terms is:  %d", n, sum );
    
}
