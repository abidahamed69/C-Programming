#include<stdio.h>
int main()
{
    int x=0;
    
    printf("Enter a number between 1-7, to print it's Day: \n");
    scanf("%d", &x);

    switch(x)
    {
        case 1:
        printf("Saturday\n");
        break;

        case 2: 
        printf("Sunday\n");
        break;

        case 3:
        printf("Monday\n");
        break;
        
        case 4:
        printf("Tuesday\n");
        break;

        case 5:
        printf("Wednesday\n");
        break;

        case 6: 
        printf("Thursday\n");
        break;

        case 7: 
        printf("Friday\n");
        break;

        default:
        printf("Invalid Number. Please input between 1 to 7\n");


    }
            return 0;

}