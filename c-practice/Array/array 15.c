#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter how many input do you want into array A: ");
    scanf("%d%d", &n);
    printf("Enter how many input do you want into array B: ");
    scanf("%d%d", &m);
    
    int a[100], b[100];

    /// taking input from user
    printf("\nEnter values for array A: \n");
    for(int i=0; i<n; i++)
    {
        printf("Input value: ");
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter values for array B: \n");
    for(int i=0; i<m; i++)
    {
        printf("Input value: ");
        scanf("%d", &b[i]);
    }

    ///printing orginal array
    printf("\nArray A:");
    for(int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\nArray B:");
    for(int i=0; i<m; i++)
    {
        printf("%d", b[i]);
    }

    ///swaping
    int limit;
    if (n>m)
    {
        limit = n;
    }
    else
    {
        limit=m;
    }
    for(int i=0; i<limit; i++)
    {
        int value = a[i];
        a[i]=b[i];
        b[i]=value;
    }

    ///printing new arrays

    printf("\n\nNew Array A: ");
    for(int i=0; i<m; i++)
    {
        printf("%d", a[i]);
    }
    printf("\nNew Array B: ");
    for(int i=0; i<n; i++)
    {
        printf("%d", b[i]);
    }


    return 0;


}