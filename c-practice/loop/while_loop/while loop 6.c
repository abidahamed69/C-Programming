/*

Write a program (WAP) that will take two numbers X and Y as inputs. 
Then it will print the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, 
until X reaches Y. If and when X is equal to Y, the program prints “Reached!”

*/

#include<stdio.h>
int main()
{
    int x, y;

    printf("Enter the value of X: ");
    scanf("%d", &x);
    printf("Now enter the value of Y: ");
    scanf("%d", &y);

    while (x!=y)
    {
        printf("%d", x*x);
        if(x<y)
        {
            printf(", ");
            x++;
        }
        else if(x>y)
        {
            printf(", ");
            x--;
        }
    }
    printf("Reached!");
    return 0;
}