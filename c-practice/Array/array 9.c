#include<stdio.h>
int main()
{
    int n;

    printf("Enter n integer number for array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the values of the array: \n");
    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int min = arr[0];
    int minindex = 0;
    int max = arr[0];
    int maxindex = 0;

    for(int i=1; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            minindex= i;
        }
        else if(arr[i]>max)
        {
            max = arr[i];
            maxindex = i;
        }
    }

    printf("\nMax value: %d, Index: %d\nMin value:%d, Index: %d", max, maxindex, min, minindex);

    return 0;
}