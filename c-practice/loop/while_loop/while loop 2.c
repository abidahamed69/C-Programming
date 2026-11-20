/*

Write a program (WAP) that will print following series upto Nth terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….


*/


#include<stdio.h>
int main()
{
    int n;
    int i=1;

    printf("Enter a number to print a odd series upto N terms: ");
    scanf("%d", &n);

    while( i<=n)
    {
        printf("%d", 2*i-1);

        if(i<n)
        {
        printf(", ");
        }

        i++;
    }

    return 0;
}