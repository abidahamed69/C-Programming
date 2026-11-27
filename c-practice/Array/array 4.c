#include<stdio.h>
int main()
{
    int n, sum=0; 

    printf("Enter n integer number into an array,\nAnd sum up all the even integers in that array: ");
    scanf("%d", &n);
    
    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &arr[i]);
    }
    
    printf("\n");

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("Sum of all the even integers is: %d", sum);

    return 0;

}