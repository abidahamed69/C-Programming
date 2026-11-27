#include<stdio.h>
int main()
{
    int n;

    printf("Enter how many input do you want into an array: ");
    scanf("%d", &n);

    int a[1000];

    printf("\nEnter values for the array\n");
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
        if(i%2!=0)
        {
            a[i]=0;
        }

    }
    printf("\nNew Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}