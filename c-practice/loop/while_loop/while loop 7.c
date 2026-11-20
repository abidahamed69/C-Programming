/*

Write a program (WAP) 
that will run and show keyboard inputs until the user types an ’A’ at the keyboard. 
*/

#include<stdio.h>
int main()
{
    char c;
    int i=1;

    while (i)
    {
        scanf(" %c", &c);
        
        if(c!='A')
        {
            printf("Input %d: %c\n", i, c );
            i++;
        }
        
        else if(c=='A')
        {
            break;    
        }


    }
    
}