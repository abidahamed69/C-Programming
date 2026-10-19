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

    printf("%d\n", ++a);

    return 0;
}

/* also we have to know about increment and decrement 
++a , --a 

++a =  let the value of a = 10 therefore, ++a will be 11 because of ++a means 1 added with the value of a 
now, 
--a =  let the value of a=10 therefore, --a will be 9 because of --a means 1 subtract withe the value of a.*/
