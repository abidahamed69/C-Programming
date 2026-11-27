#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    
    printf("Enter n integer numbers into an array,\nthen find the average of those number:");
    scanf("%d", &n);

    float arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%f", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    printf("\n");
    printf("Average of the array is: %.2f", sum/n );
    
    return 0;
}