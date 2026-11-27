#include<stdio.h>
int main()
{
    int n; 

    printf("Enter how many input do you want into an array: ");
    scanf("%d", &n);

    int a[1000];

    printf("\nEnter values for array\n");
    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &a[i]);
    }

    printf("\nArray: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }


    for(int i=0; i<n; i++)
    {
        if(a[i]%3==0)
        {
            a[i]=-1;
        }
    }

    ///new array
    printf("\nNew Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}