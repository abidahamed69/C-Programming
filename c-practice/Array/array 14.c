#include<stdio.h>
int main()
{
    int n;

    printf("Enter how many input do you want into an array: ");
    scanf("%d", &n);

    int arr[100];

    printf("\nEnter values for the array: \n");
    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &arr[i]);
    }

    printf("\nArray: ");
    for(int i=0; i<n ; i++)
    {
        printf("%d ", arr[i]);
    }
    
    int position;
    printf("\nNow to delete a number input its position: ");
    scanf("%d", &position);

    for(int i=position; i<n-1; i++)
    {
        arr[i]= arr[i+1];
    }
    n--;

    printf("\nNew array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;



}