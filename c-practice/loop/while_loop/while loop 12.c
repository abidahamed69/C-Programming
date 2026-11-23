/*

Write a program (WAP) that will print the factorial (N!) of a given number N. Please see the sample input output.

*/

#include<stdio.h>
int main()
{
    int n;
    long long int sum=1;
    int i=1;

    printf("Etner a digit to print its factorial(N!): ");
    scanf("%d", &n);
    
    printf("\n%d! = ",n);
    while(i<=n)
    {
        sum*=i;

        if(i<=n)
        {
            printf("%d",i);
            if(i<n)
            {
                printf(" X ");
            }
        }

        i++;
    }
    printf(" = %d", sum);

    return 0;
}