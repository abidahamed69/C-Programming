#include<stdio.h> /// header file

int main() /// main function
{
    /*now here opening second bracket to closing second bracket
    we will write our code . 
    between this bracket whatever we write that will print in the terminal. */

    printf("Hello World!"); ///here printf() is a function.

    int a = 12;  ///  int = interger data type, which will take (0,1,2,3,4,5,6,7,8,9) numbers.
    
    float b = 12.07;  /* float = floating data type, which will take decimal numbers such as: 22.4, 3.1416, 9.8 etc
                                but float data type will take 6 digit after decimal point.*/
    
    double c = 12.072005;  /*  double = double data type is also a kind of float data type, example: 6.023, 10.5478 etc
                                        but floating data type will take 8 digit after decimal point..*/
    
    char d = 'A'; /// char = character data type , this data type take only letters example: a-z and A-Z.


     /*
     
     Now let's talk about variable, 

     variable could be anything, but there is some rules:
     1. Must start with letter or underscore. 
     2. must not be a keywords, Keywords means int , float etc cannot be a variable.
     3. no space will accpectable. 
     4. variable cannot start with numbers. but number can stay in variable. 
        example: class1; = this can be a variable which is acceptable. 
                 2class; = this variable cannot be acceptable, because it start with number.
     
     */

    /// now lets print these data type:

    printf("a = %d\n", a); /// here %d is format specifier which is only used for integer data type.
    printf("b = %f\n", b); /// here %f is format specifier which is only used for float data type.
    printf("c = %lf\n", c); /// here %lf is format specifier which is only used for double data type.
    printf("d = %c\n", d); /// here %c is format specifier which is only used for character data type.


    /*
    
    now let's talk about scanf(); function:
    for this function we can take input randomly from users. 
    
    */

    int x;
    printf("Enter a integer number: ");

    scanf("%d", &x); /// here, & means address operator.

    printf("x = %d", x);


}