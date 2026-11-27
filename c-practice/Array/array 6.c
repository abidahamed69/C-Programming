#include<stdio.h>
int main()
{
    int n, sum=0;

    printf("Enter n integer number into an array,\nthen sum up all the even indexed number:");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("\n");
    
    printf("Sum of the all the even indexed number is: %d", sum);

    return 0;
}