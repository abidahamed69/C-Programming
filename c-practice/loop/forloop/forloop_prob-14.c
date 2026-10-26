/*

Write a program (WAP) that will print the factorial (N!) of a given number N. Please see
the sample input output.

*/

#include<stdio.h>
int main()
{
    int i, sum=1, n;

    printf("Enter a number for it's factorial: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        {
            sum *= i;
        }
    printf("The factorial of %d is: %d", n, sum);

    return 0;

}