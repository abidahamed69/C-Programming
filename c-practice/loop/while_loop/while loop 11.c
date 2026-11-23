/*

Write a program (WAP) that will print Fibonacci series upto Nth terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….

*/

#include<stdio.h>
int main()
{
    int n, x=1, y=1, sum=0;
    int i=1;

    printf("Enter a digit to print N terms of Fibonacci series: ");
    scanf("%d", &n);

    while (i<=n)
    {
        if(i==1)
        {
            printf("%d", x);
        }
        else if(i==2)
        {
            printf("%d",y);
        }
        else
        {
            sum=x+y;
            x=y;
            y=sum;

            printf("%d", sum);
        }

        if(i<n)
        {
            printf(", ");
        }
        i++;
    }
    
}