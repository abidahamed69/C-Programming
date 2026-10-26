/*

Write a program (WAP) for the described scenario:
Player-1 picks a number X and Player-2 has to guess that number within N tries. For each
wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at
any time successfully guesses the number, the program prints “Right, Player-2 wins!” and
terminates right away. Otherwise after the completion of N wrong tries, the program
prints “Player-1 wins!” and halts.

(Hint: Use break/continue)

*/

#include<stdio.h>
int main()
{
    int n, x, y;

    printf("Player-1 pick a number: ");
    scanf("%d", &x);

    printf("Enter how many tries do you want (maximum-4): ");
    scanf("%d", &n);


    for(int i=1; i<=n; i++)
    {
        printf("Now Player-2 guess the number: ");
        scanf("%d", &y);

        if(x==y)
        {
            printf("Right, Player-2 wins!");
            break;
        }
        else if(y!=x)
        {
            printf("Wrong, %d chance's Left!\n\n", n-i);
            continue;
        }

    }

    if (y!=x)
    {
        printf("Player-1 wins!\n");
    }

    return 0;


}


