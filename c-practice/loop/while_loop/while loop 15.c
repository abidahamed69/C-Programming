/*

Write a program that takes an integer number n as input and find out the sum of the following series up to n terms.
1 + 12 + 123 + 1234 + …….

*/

#include<stdio.h>
int main()
{
    int n, sum=0, term=0;
    int i=1;

    printf("Enter the integer number to find out the series N terms of sum: ");
    scanf("%d", &n);

    while (i<=n)
    {
        term= term * 10 + i;
        sum = sum + term ;

        i++;
    }

    printf("%d", sum);

    return 0;
    
}