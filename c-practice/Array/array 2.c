#include<stdio.h>
int main()
{
    int n;

    printf("Enter n integer number into an array: ");
    scanf("%d", &n);

    int arr[n]; 

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nArray: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nRevese Array: ");

    for(int i=n-1; i>=0; i--)
    {
        printf(" %d", arr[i]);
    }
}