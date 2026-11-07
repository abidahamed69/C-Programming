#include<stdio.h>
#include<math.h>

int main()
{
    {
            double a,b;
            
            printf("Enter two value: ");
            scanf("%lf %lf", &a,&b);
            
            printf("Sum : %lf\n", a+b);
            printf("Difference : %lf\n", a-b);
            printf("Multiplication : %lf\n", a*b);
            
            
            if(b !=0)
            {
                printf("Division : %lf\n", trunc(a/b));
            }
            else
            {
                printf("B cannot be 0\n");
            }
            
            printf("Reminder : %lf\n", fmod(a,b));

    }



    {
        float a, b, x;

        printf("\nEnter two value: ");
        scanf("%f %f", &a, &b);

        x = (((3.31*a*a) + (2.01*b*b*b)) / ((7.16*b*b) + (2.01*a*a*a)));

        printf("X = %f\n",x);

    
    }

    


    {
        int x = 10;

        printf("\n%d\n", x++);
        printf("%d\n", ++x);

        printf("%d\n", x--);
        printf("%d\n", --x);

    }




    {
        int x = 10;
        double y = x;

        printf("\n%lf\n", y);

        y+=1.12;
        printf("%lf\n", y);

        int z = y;
        printf("%d\n", z); 

    }




    {
        
        /// ternary oeprator

       int x = 8;

        int y;
        int max;

     /*   if(x>0)
        {
            printf("y = 1");
        }
        else
        {
            prin(" y = 10");
        } */

        y = (x>0)? 1:10;

        printf("\n%d", y);


        /*
        if(x>y)
        {
        printf("max = x");
        }

        else
        {
        printf("max=y");
        }
        */

        max = (x>y)? x:y;

        printf("%d\n", max);


    }


    {
        int a,b,c;

        printf("\nEnter three value: ");
        scanf("%d%d%d", &a,&b,&c);

        printf("%d\n", (a+b)<=80 && b>=0);
        
        /* printf("%d\n", !(a+c));
        printf("%d", a!=0);
        */

        printf("%d\n", (a-b)==0 || c!=0);
        printf("%d\n", a!=b || (b<a && c>0));
    }


    {
        int x;
        printf("\nEnter a tegon: \n");
        scanf("%d", &x);

        double rad = x* (3.1416/180);

        double exp = 2*cos(rad)*cos(rad) - sqrt(3.0)*sin(rad) + sin(rad/2);

        printf("%0.3lf\n", exp);
        
    }


    {
        double x = 3.5;

        printf("\n%d\n", (int) floor(x));
        printf("%d\n", (int) ceil(x));


        double a = -4.0;
        double b = 4.0;

        printf("%lf\n", fabs(a));
        printf("%lf\n", fabs(b));


        int c = -5;
        printf("%d\n", fabs(c));


    }




    
    {

        
        printf("size of int byte (s) = %zu\n", sizeof(int));
        printf("size of float byte (s) = %zu\n", sizeof(float));
        printf("size of double byte (s) = %zu\n", sizeof(double));
        printf("size of character byte (s) = %zu\n", sizeof(char));


    }

    return 0;


}