/*

Program that will evaluate simple expressions of the form-
<number1> <operator> <number2>
; where operators are (+, - , *, /)
And if the operator is “/”, then check if <number2> nonzero or not.

*/

#include<stdio.h>
#include<math.h>
int main()
{
    float num1, num2, sum;
    char operator;

    printf("Enter two number for a simple expression :");
    scanf("%f%f", &num1,&num2);

    getchar();
    printf("\nEnter the expression in which operator do you want to work in: ");
    scanf("%c", &operator);

    if (operator=='+')
    {
        sum = num1 + num2;
        printf("Addition: %f", sum);
    }
    else if(operator=='-')
    {
        sum = num1 - num2;
        printf("Subtraction: %f", sum);
    }
    else if(operator=='*')
    {
        sum = num1 * num2;
        printf("Multiplication: %f", sum);
    }
    else if(operator=='/')
    {
        sum = num1 / num2;
        
        if (num2==0)
        {
            printf("Dvision: Zero as divisor is not valid!");
        }
        else
        {
        printf("Division: %f", sum);
        }
    }
    else if(operator=='%')
    {   
        if (num2==0)
        {
            printf("Reminder: Zero as divisor is not valid!");
        }
        else
        {
            sum = (int)num1 % (int)num2;
        printf("Reminder: %f", sum);
        }
    }
    else
    {
        printf("Invalid Operator!");
    }

    return 0;

    
}
