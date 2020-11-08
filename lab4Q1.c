#include <stdio.h>
#include <math.h> // importing the math library 


int main(void){
    // declaring the variables
    double a, b, c;
    double r1, r2;

    // getting the input from the user
    printf("Please enter the value for coefficient a:\n");
    scanf("%lf", &a);
    printf("Please enter the value for coefficient b:\n");
    scanf("%lf", &b);
    printf("Please enter the value for coefficient c:\n");
    scanf("%lf", &c);

    // compute
    r1 = ( - b + sqrt( pow (b , 2.0) - (4.0*a*c)) )/(2.0*a);
    r2 = ( - b - sqrt( pow (b , 2.0) - (4.0*a*c)) )/(2.0*a);

   //printing the result after checking how many real roots it haves or not
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

    //exiting 
    return 0;

}
