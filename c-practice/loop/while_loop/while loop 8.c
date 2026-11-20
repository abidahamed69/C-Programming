/*

Write a program (WAP) 
that will reverse the digits of an input integer.

*/

#include<stdio.h>
int main()
{
    int n, reminder, division, sum=0;
    int i=1;

    printf("Enter a number to print its reverse: ");
    scanf("%d", &n);

    while (n!=0)
    {
        reminder = n%10;
        sum = sum * 10 + reminder;
        n= n/10;  
    }
    
    printf("%d", sum);

    return 0;
    
}