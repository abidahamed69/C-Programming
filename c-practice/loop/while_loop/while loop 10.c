/*

Write a program (WAP) that will calculate the result for the first Nth terms of the following series.  [In that series sum, dot sign (.) means multiplication]
12.2 + 22.3 + 32.4 + 42.5 + …….

*/



#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum=0;
    int i=1;

    printf("Enter a digit to calculate it's N terms of series: ");
    scanf("%d", &n);

    while (i<=n)
    {
        sum+= pow(i,2)*(i+1);
        i++;
    }
    printf("\nResult: %d", sum);
    
    return 0;

}