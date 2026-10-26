/*

Write a program (WAP) that will print following series upto Nth terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….

*/

#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number to print a series: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            printf("0");
        }
        else if(i%2 != 0)
        {
            printf("1");
        }

        if(i<n)
        {
            printf(", ");
        }
}
    return 0;
    
}