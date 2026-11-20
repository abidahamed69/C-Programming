/*

Write a program (WAP) that will take N numbers as inputs and compute their average. 
(Restriction: Without using any array)

*/

#include<stdio.h>
int main()
{
    int n, i=1;
    double x,sum=0;

    printf("Enter how many inputs average do you want: ");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("Enter the %d number: ", i);
        scanf("%lf", &x);
    
        sum+=x;

        i++;
    }
    printf("AVG of %d inputs: %lf", n, sum/n);

    return 0;
    
}