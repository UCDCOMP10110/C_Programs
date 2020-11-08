#include <stdio.h>
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

         printf("Please enter the principal:\n");
         scanf("%lf", &P);
         if(P<0)
         {
             printf("invalid principal");
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

          double t = pow(A/P , 0.00277777);
          double Q = t - 1;
          r = Q * 1200;


         // result
         printf("The rate is %.2f\n", round(r));




         return 0;
}
