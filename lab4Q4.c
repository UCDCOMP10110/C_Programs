#include <stdio.h>// program to find the principal 
#include <math.h>

int main(void)
{
         // declaring variables
         double P,A,n,r;
         double K = 12;


         // input from user
         printf("Please enter the amount:\n");
         scanf("%lf", &A);
         if(A < 0)
         {
             printf("invalid amount");
             return 0;
         }

         printf("Please enter the rate:\n");
         scanf("%lf", &r);
         if(!(0<r && r<=100))
         {
             printf("invalid rate");
             return 0;
         }

         printf("Please enter the number of years:\n");
         scanf("%lf", &n);
         if(!(n>0))
         {
             printf("invalid number of years:\n");
             return 0;
         }


         // compute

         P = A/pow((1.0 + (r/(100*K))), n*K);


         // result
         printf("The principal is %.2f\n", P);




         return 0;
}
