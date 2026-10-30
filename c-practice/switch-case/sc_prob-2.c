#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter to verify vowel or constant: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'A': 
        printf("vowel\n"); 
        break;

        case 'E':
        printf("vowel\n");
        break;

        case 'I': 
        printf("vowel\n");
        break;

        case 'O':
        printf("vowel\n");
        break;

        case 'U': 
        printf("vowel\n");
        break;

        case 'a':
        printf("vowel\n");
        break;

        case 'e':
        printf("vowel\n");
        break;

        case 'i': 
        printf("vowel\n");
        break;

        case 'o':
        printf("vowel\n");
        break;

        case 'u':
        printf("vowel\n");
        break; 

        default:
        if((ch>'a' && ch<'z') || (ch>'A' && ch<'Z'))
        {
        printf("Constant\n");
        }
        else
        {
            printf("Invalid!");
        }

    }

    return 0;
}