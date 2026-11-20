#include<stdio.h>
int main()
{
    int n, sum=5;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n==1 || n==2)
    {
        sum+=n;
        printf("sum=%d\n",sum);
    }
    else if(n==3)
    {
        printf("sum=%d\n", sum);
    }
    else if(n==4)
    {
        printf("n= %d\n", ++n);
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}