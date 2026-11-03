#include<stdio.h>
#include<stdbool.h>

#define height 200
#define con 6.023

int main()
{
    printf("Hello world\n");

    printf("This is my first program. \t C is fun\n\n");

    printf("This question is- \"How to write a\n \\comment/ in C programming language?\"\n\n");

    int a=5;
    float b=3.141593;
    char x = 'a';
    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c\n\n", a, b, x);


    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("My age is: %d\n\n", age);


    int e;
    float f;
    char y;
    printf("Enter any interger then floating number then character number: ");
    scanf("%d%f %c", &e,&f, &y);
    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c\n\n", e, f, y);


    int f1st, lst;
    printf("Enter three value to skip the middile value: ");
    scanf("%d %*d %d", &f1st, &lst);
    printf("First value= %d,\tLast value= %d\n\n", f1st, lst);


    bool b_val = true;
    bool b1_val = false;
    double z = 3.14;
    printf("The double value: %lf\nThe boolean value: %d\nThe next boolean value: %d\n\n", z, b_val, b1_val );



    long int v= 2147483647;
    long long int v1= 9223372036854775807;
    long double v2 = 1.1E+4932L;
    short int v3 = 32767;
    printf("The long int value: %ld\n", v);
    printf("The long int value: %lld\n", v1);
    printf("The long double value: %le\n", v2);
    printf("The short int value: %hd\n\n", v3);


    const float PI= 3.14;
    const float gd = 1.62;
    printf("The value of pi: %f\n", PI);
    printf("The value of golden ratio: %f\n\n", gd);


    printf("The value of height: %d\nThe value of constant: %f\n\n", height, con);



    return 0;

}
