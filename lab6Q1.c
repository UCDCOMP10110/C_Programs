#include <stdio.h>

int main(void)
{
    double w, x, y, z;
    double min; /* the variable to hold the minimum value */
    scanf("%lf%lf%lf%lf", &w, &x, &y, &z);/* getting value from the user */

    /* entering solution here */
    if(w <= x  && w <= y && w <= z )
        {
            min = w;
        }

    else if(x <= w && x <= y && x <= z )
        {
            min = x;
        }

    else if(y <= x && y <= w && y <= z )
        {
            min = y;
        }

    else if(z <= x && z <= y && z <= w )
        {
            min = z;
        }



    /* output value */
    printf("%f\n", min);
    return 0;
}
