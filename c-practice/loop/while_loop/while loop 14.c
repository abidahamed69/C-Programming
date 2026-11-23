/*

WAP that will determine whether a number is prime or not.

*/

#include<stdio.h>
int main()
{
    int n;
    int i= 1;

    printf("Enter a digit to determine whether it is prime or not:  ");
    scanf("%d", &n);

    while (i<=n)
    {
        if (n%n==0 && n%1==0)
        {
            printf("Prime");
            break;
        }
        else
        {
            printf("Not prime");
            break;
        }
        i++;
        
    }
    return 0;
    

}