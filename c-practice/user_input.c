#include<stdio.h>
int main()
{
    int age;
    char section;
    float salary;
    double bonous_salary;

    printf("Enter your age:"); 
    scanf("\n%d", &age);

    printf("Enter your section: ");
    scanf("\n%c", &section);

    printf("Enter your salary: ");
    scanf("\n%f", &salary);

    printf("Enter your bonous salary: ");
    scanf("\n%lf", &bonous_salary);



    printf("\nAge: %d\n", age);
    printf("Section: %c\n", section);
    printf("Age: %f\n", salary);
    printf("Age: %lf\n", bonous_salary);

    return 0;
}

/*Here, 
scanf is for take an input form user.
*/