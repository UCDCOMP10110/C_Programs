#include <stdio.h>
#include <math.h>

int main(void)
{
         // declaring variables
         double P,A,n,r;
         double K = 12;


         // input from user
         printf("Please enter the principal:\n");
         scanf("%lf", &P);
         if(P<0)
         {
             printf("invalid principal");
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

         A = P*pow((1.0 + (r/(100*K))), n*K);


         // result
         printf("The amount is %.2f\n", A);




         return 0;
}
