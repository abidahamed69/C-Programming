#include<stdio.h>
#include<math.h>
int main()
{
    float x, y, sum=0;
    int sum1=0;
    char op;

    printf("Enter The first value : ");
    scanf("%f", &x);

    printf("Enter The first value : ");
    scanf("%f", &y);

    printf("Now enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
        sum = x+y;
        printf("Addition: %.2f\n", sum);
        break;

        case '-': 
        sum = x-y;
        printf("Subtraction: %.2f\n", sum);
        break;

        case '*':
        sum = x*y;
        printf("Multiplication: %.2f\n", sum);
        break;

        case '/': 
        if (y==0)
        {
            printf("Divisor can not be zero");
        }
        else
        {
            sum = x/y;
            printf("Division: %.3f\n", sum);
        }
        break;

        case '%':
                if (y==0)
        {
            printf("Divisor can not be zero");
        }
        else
        {
            sum1 = (int)x % (int)y;
            printf("Reminder: %d\n", sum1);
        }
        break;
        
    }

    return 0;

}