/*

WAP that will print a pattern based on the input integer n. 
Please see the sample input output.

*/

#include<stdio.h>
int main()
{
    int n;

    printf("Ener a integer input to print a pattern: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++ )
    {
        for(int j=i; j<i+n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}