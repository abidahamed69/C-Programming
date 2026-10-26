/*

Write a program (WAP) that will calculate the result for the first Nth terms of the
following series. [In that series sum, dot sign (.) means multiplication]
1^2.2 + 2^2.3 + 3^2.4 + 4^2.5 + …….


*/
#include<stdio.h>
int main()
{
    int n, sum=0;

    printf("Enter Nth terms for the series: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum = sum + (i*i)*(i+1);
    }
    printf("Sum of the Nth terms series is: %d", sum);
    return 0;
}