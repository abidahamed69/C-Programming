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

    /*
    
    we can also assign operators like these: 
    a += b means a+b=
    a -= b means a-b=
    a *= b means a*b=
    a /= b means a/b=
    a %= b means a%b =
    
    */

    printf("%d\n", ++a);
    printf("%d\n", --b);

    /// now we are going to know about "relational operators".

    /*

    == means equal to
    > means greater than
    < means less than
    != means not equal here, ! represent "not"
    >= means greater than or equal to
    <= means less than or equal to
    
    */

    /*
    
    now we are going to learn "about logical operators"
    && means logical and .. which work as all value must be present ture
    || means logical or .. which work as either this value will true or another value will ture 
    ! means logical not .. 

    we will briefly discuss about these operators in if-else conditions 
    
    */

    return 0;
}

/* 

also we have to know about increment and decrement 
++a , --a 

++a =  let the value of a = 10 therefore, ++a will be 11 because of ++a means 1 added with the value of a 
now, 
--a =  let the value of a=10 therefore, --a will be 9 because of --a means 1 subtract withe the value of a.

*/
