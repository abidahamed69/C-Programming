/*

Write a program (WAP) that will give the sum of first Nth terms for the following series.
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….

*/

#include<stdio.h>
int main()
{
    int n, sum=0;
    int i=1;

    printf("Enter the number of series of term you want: ");
    scanf("%d", &n);

    while (i<=n)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
        else if(i%2==0)
        {
            sum-=i;
        }
        i++;
    }
    printf("Result: %d", sum);

    return 0;
    
}