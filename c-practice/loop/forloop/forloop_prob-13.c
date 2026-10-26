/*

Write a program (WAP) 
that will print Fibonacci series upto Nth terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….

*/

#include<stdio.h>
int main()
{
    int n, sum=0, x=1, y=1;

    printf("Enter how many Nth terms fibonacci series will print: ");
    scanf("%d", & n);

    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("%d", x);
        }
        else if(i==2)
        {
            printf("%d", y);
        }
        else
        {
            sum = x+y;
            x=y;
            y=sum;
            printf("%d", y);
        }

        if(i<n)
        {
            printf(", ");
        }
    }

    return 0;
}