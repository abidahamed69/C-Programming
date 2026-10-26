/*

Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’
at the keyboard.

*/

#include<stdio.h>
int main()
{
    int i;
    char input, a= 'A';

    for(i=1 ;; i++)
    {
        scanf(" %c", &input);
        
        if (input!=a)
        {
            printf("Input %d: %c\n", i, input);
            continue;
        }
        
        else if (input==a)
        {
            break;
        }
        
    }
    return 0;
}