#include<stdio.h>
int main()
{
    
    ///Direct input
    int arr2[5]= {5,6,7,8,9};
    printf("Array:");
    for(int i=0; i<5; i++)
    {
        printf(" %d", arr2[i]);
    }

    
    ///User input
    int n;
    
    printf("\nEnter n integer number into an array: ");
    scanf("%d", &n);

    int arr[n];

        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
        }

        printf("Array: ");

        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[j]);
        }
        
        printf("\n\n");

        for(int i=0; i<n; i++)
        {
            printf("Array index: %d = %d\n", i, arr[i]);
        }

    return 0;
}