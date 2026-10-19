#include<stdio.h>
int main()
{
    float gpa;

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    if(gpa>=4.50)
    {
        printf("Great! You are eligible for admission.\nNow put your Math and physics marks,\nTo check have you got the scholarship or not:");
        int math, phy;
        scanf("%d%d", &math, &phy);

        if (math>=80 && phy>=80)
        {
            printf("Now enter your family income to verify your Scholarship:");
            int salary;
            scanf("%d", &salary);

            if (salary<15000)
            {
                printf("You got 100%% Scholarship (Full Free)\n.");
            }
            else if(salary>15000 && salary<30000)
            {
                printf("You got 50%% scholarship.\n");
            }
            else
            {
                printf("General Admission(No Scholarship)\n");
            }
            
        }
        else if(math<80 || phy<80)
        {
            printf("General Admission(No scholarship).\n");
        }
        

    }

    else if (gpa>3.50 && gpa<4.49)
    {
        printf("Regular Admission(No Scholarship).\n");
    }

    else
    {
        printf("Application rejected for your lower gpa.\n");
    }
    

    return 0;

}