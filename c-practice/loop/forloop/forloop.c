/*

There are three types of loops: 
1. For loop
2. While loop
3. do..While loop
there is an another type of loop exist which is INFINITY Loop
we normally don't use this type of loop .


at first we have know about the syntax of for loop

for(initialization, conditions, updateStatement)

*/

#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number to print how many numbers do you want to print: ");
    scanf("%d", &n);

    for (int i=1; i<n; i++)
    {
        printf("%d\n", i);
    }

    return 0;

}