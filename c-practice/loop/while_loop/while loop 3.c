/*

Write a program (WAP) that will print following series upto Nth terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….

*/


#include<stdio.h>
int main()
{
    int n;
    int i=1;

    printf("Enter a number to print a series upto N terms: ");
    scanf("%d", &n);


    while (i<=n)
    {
        if(i%2==0)
        {
            printf("0");
        }
        else if(i%2!=0)
        {
            printf("1");
        }
        if (i<n)
        {
            printf(", ");
        }

        i++;
        
    }

    return 0;
    
}