/*

Program that will take an integer of length one from the terminal and then display the digit
in English.

*/


#include<stdio.h>
int main()
{
    int a;

    printf("Enter a integer of length one to display the digit in English: ");
    scanf("%d", &a);

    if (a==0)
    {
        printf("Zero");
    }
    else if(a==1)
    {
        printf("One");
    }
    else if(a==2)
    {
        printf("Two");
    }
    else if(a==3)
    {
        printf("Three");
    }
    else if(a==4)
    {
        printf("Four");
    }
    else if(a==5)
    {
        printf("Five");
    }
    else if(a==6)
    {
        printf("Six");
    }
    else if(a==7)
    {
        printf("Seven");
    }
    else if(a==8)
    {
        printf("Eight");
    }
    else if(a==9)
    {
        printf("Nine");
    }

    return 0;
    
}