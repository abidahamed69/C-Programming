#include<stdio.h>
int main()
{
    int n; 

    printf("Enter how many input do you want into an array: ");
    scanf("%d", &n);

    int arr[1000];

    printf("\nEnter values for the loop\n");
    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &arr[i]);
    }

    printf("\nArray:");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    int num, position;
    printf("\n\nEnter the value and the position where you want to insert: ");
    scanf("%d%d", &num, &position);

    for(int i=n; i>position; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=num;
    
    n++;
    printf("\nNew Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;



}