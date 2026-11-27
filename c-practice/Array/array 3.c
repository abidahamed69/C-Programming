#include<stdio.h>
int main()
{
    int n, sum=0;
    
    printf("Enter an integer number into an array,\nAnd sum up all the integers: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    printf("Sum of the array is: %d", sum);

    return 0;
}