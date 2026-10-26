/*

Write a program (WAP) that will print following series upto Nth terms.
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….

*/


#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        printf("%d", i);

        if (i<n)
        {
            printf(", ");
        }
    }

    return 0;
}

/*

here i use if condtion because of print a comma after a digit. 
yeah i can set this comma at loop's printf but if i use there
the comma will print after the last digit.. 
thats why i set a condition where the comma will not print after the last digit.

*/