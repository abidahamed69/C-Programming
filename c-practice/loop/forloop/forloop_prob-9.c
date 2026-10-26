/*

Write a program (WAP) that will reverse the digits of an input integer

*/

#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number to print it's reverse:");
    scanf("%d", &num);

    for(; num>0 ; num/=10)
    {
        printf("%d", (num%10));
    }

    return 0;
}