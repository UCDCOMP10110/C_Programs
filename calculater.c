/*create a basic calculater*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    /* declare some variables */
     int c;
     double f;
     double ans;

     printf("Please enter a floating point number: ");
     scanf("%lf", &f);
     printf("Please enter a integer point number: ");
     scanf("%d", &c);
     /* do my computation*/
     ans = c*f;

     /*write my answer to the console*/

     printf("%d multiplied by %f = %f\n", c, f, ans);

    return 0;
}
