/*

Program that will check whether a triangle is valid or not, when the three angles (angle value
should be such that, 0 < value < 180) of the triangle are entered through the keyboard.
[Hint: A triangle is valid if the sum of all the three angles is equal to 180 degrees.]

*/

#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three angles to verify a triangle is valid or not: ");
    scanf("%d%d%d", &a,&b,&c);

    if ((a+b+c==180) && (0<a<180 && 0<b<180 && 0<c<180) && (a!=180 && b!=180 && c!=180))
    {
        printf("Yes, this is a valid triangle");
    }

    else
    {
        printf("Invalid triangle, try again");
    }    

    return 0;
}