#include<stdio.h>
int main()
{
    int n;

    printf("Enter n input you want to store in an array: ");
    scanf("%d", &n);

    char arr[n];

    printf("\nEnter the values of the array:\n");
    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf(" %c", &arr[i]);
    }

    printf("\nArray: ");
    for(int i=0; i<n; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");

    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]=='A' || arr[i]=='a')
        {
            count+=1;
        }
        else if(arr[i]=='E' || arr[i]=='e')
        {
            count+=1;
        }
        else if(arr[i]=='I' || arr[i]=='i')
        {
            count+=1;
        }
        else if(arr[i]=='O' || arr[i]=='o')
        {
            count+=1;
        }
        else if(arr[i]=='U' || arr[i]=='u')
        {
            count+=1;
        }
    }

    printf("\nThe vowels between the word is: %d", count);


}