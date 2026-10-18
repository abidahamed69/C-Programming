#include<stdio.h>
int main()
{
    char name;

    printf("Enter a character: ");
    scanf("%c", &name);

    printf("%c = %d", name , name );

    return 0;
}

/* This code is for ascii value..

From 65 to 90 = A to Z (capital letter)
From 97 to 122 = a to z (small letter)
From 48 to 57 = 0 to 9 (Numbers)

*/