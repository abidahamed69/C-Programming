#include<stdio.h>
int main()
{
    int n;

    printf("Enter n integer numbers into an array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the values of the array: \n");
    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Array:");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    for(int i=0; i<n/2; i++)
    {
        int value = arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1] = value;
    }
    
    printf("Reverse array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n%d", arr[3]);
    return 0;
}