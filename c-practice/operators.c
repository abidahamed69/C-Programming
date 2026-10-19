#include<stdio.h>
int main()
{
    /* 
    
    there are five types of operators: 
    "+" = addition 
    "-" = subtraction
    "*" = multiplication 
    "/" = division
    "%" = modulus or we can say remainder.

    */

    int sum, a,b;
    printf("Enter two integer value: ");
    scanf("%d%d", &a,&b);

    sum = a+b;
    printf("\nAddition: %d\n", sum);

    sum = a-b;
    printf("Subtraction: %d\n",sum);

    sum = a*b;
    printf("Multiplication: %d\n",sum);

    sum = a/b;
    printf("Division: %d\n",sum);
    
    sum = a%b;
    printf("Reminder: %d\n",sum);

    return 0;
}