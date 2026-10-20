/*

Program that will categorize a single character that is entered at the terminal, whether it is
an alphabet, a digit or a special character.

*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character to define whether it is alphabet or a digit or a special character: ");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("Alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }

    return 0;
}