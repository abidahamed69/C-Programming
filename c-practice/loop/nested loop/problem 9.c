#include<stdio.h>
int main()
{
    int n;

    printf("Enter a integer input to print a pattern: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=n; j++)
            {
                if(j%2!=0)
                {
                    printf("1");
                }
                else if (j%2==0)
                {
                    printf("0");
                }
            }
        }
        else if(i%2==0)
        {
            for(int k=1; k<=5; k++)
            {
                if(k%2!=0)
                {
                    printf("0");
                }
                else if(k%2==0)
                {
                    printf("1");
                }
            }
        }

        printf("\n");
    }

    return 0;
}