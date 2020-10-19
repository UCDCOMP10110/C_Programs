#include <stdio.h>
#include <math.h>


int main(void){

    double a, b, c;
    double r1, r2;


    printf("Please enter the value for coefficient a:\n");
    scanf("%lf", &a);
    printf("Please enter the value for coefficient b:\n");
    scanf("%lf", &b);
    printf("Please enter the value for coefficient c:\n");
    scanf("%lf", &c);


    r1 = ( - b + sqrt( pow (b , 2.0) - (4.0*a*c)) )/(2.0*a);
    r2 = ( - b - sqrt( pow (b , 2.0) - (4.0*a*c)) )/(2.0*a);


    if( (pow(b , 2.0) - (4.0*a*c)) > 0  ){
        printf("The number of real roots is 2.\n");
        printf("The value of the first root is  %.5f.\n", r1);
        printf("The value of the second root is %.5f.\n", r2);
    }else if(pow(b , 2.0) - (4.0*a*c) == 0  ) {
        printf("The number of real roots is 1.\n");
        printf("The value of the first root is\t %.5f.\n", r1);
        }
        else {
        printf("The number of real roots is 0.\n");
        }


    return 0;

}
