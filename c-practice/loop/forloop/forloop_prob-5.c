/*

Write a program (WAP) that will take N numbers as inputs and compute their average.
(Restriction: Without using any array)

*/

#include<stdio.h>
int main()
{
    int n, i;
    float num, avg, sum=0;

    printf("Enter how many input do you want get their avarage: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    { 
        printf("Enter the %d digit: ", i);
        scanf("%f", &num);

        sum+=num;
    }

    avg = sum/n;
    printf("Avg of %d inputs is: %f", n , avg);

    return 0;
}