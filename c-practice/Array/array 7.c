#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter n integer number into an array: ");
    scanf("%d",&n);

    int arr1[n], arr2[n], arr3[n];

    printf("\nInput value for first array: \n");
    for(int i=0; i<n; i++)
    {
        printf("Input value : ");
        scanf("%d", &arr1[i]);
    }

    printf("\nInput value for second array: \n");
    for(int i=0; i<n; i++)
    {
        printf("Input value : ");
        scanf("%d", &arr2[i]);
    }
    for(int i=0; i<n; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    printf("\nThird Array is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;

}