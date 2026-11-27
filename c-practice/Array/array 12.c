#include<stdio.h>
int main()
{
    int n;

    printf("Enter how many values do you want to input into an array: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    
    printf("\nEnter values for the array A: \n");
    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &arr1[i]);
    }

    for(int i=0; i<n; i++)
    {
        arr2[i] = arr1[n-i-1];
    }

    
    printf("\nArray A: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nArray B: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;

}