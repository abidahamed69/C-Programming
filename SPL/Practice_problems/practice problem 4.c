#include<stdio.h>
int main()
{
    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: 
        printf("Division\n");
        break;

        case 2:
        case 3:
        printf("Remainder\n");
        break;
        
        case 4:
        printf("Increment\n");
        break;

        default:
        printf("Invalid Choice\n");
    }

    return 0;
}