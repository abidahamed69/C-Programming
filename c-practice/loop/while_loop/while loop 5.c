/*

Write a program (WAP) for the described scenario: 
Player-1 picks a number X and Player-2 has to guess that number within N tries. For each wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at any time successfully guesses the number, the program prints “Right, Player-2 wins!” and terminates right away. Otherwise after the completion of N wrong tries, the program prints “Player-1 wins!” and halts.

(Hint: Use break/continue)

*/

#include<stdio.h>
int main()
{
    int x;
    int n, y;
    int i=1;

    printf("Player-1 guess a number: ");
    scanf("%d", &x);
    printf("player-2 enter how many attempet do you want: ");
    scanf("%d", &n);

    while(i<=n)
    {
        printf("Player-2 guess the Number: ");
        scanf("%d", &y);

        if(x!=y)
        {
            printf("Wrong, %d Choice's left!\n", n-i);
            if(i==n)
            {
                printf("player-1 wins!");
                break;
            }
        }
        else if(x==y)
        {
            printf("Right, Player-2 wins!\n");
            break;
        }

        i++;
    }


}