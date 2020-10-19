#include <stdio.h>
#include <math.h>


int main(void){

    double P, R, Y;

    double A;


    printf("Please enter the amount:\n");
    scanf("%lf", &A);
    if( A < 0 ){
        printf("Invalid amount.");
        return 0;
    }
    printf("Please enter the principal:\n");
    scanf("%lf", &P);
    if( P < 0 ){
        printf("Invalid principal.");
        return 0;}
     printf("Please enter the number of years:\n");
    scanf("%lf", &Y);
    if(!(Y > 0)){
        printf("Invalid number of years.");
        return 0;}

     else{

       double t = pow(A/P , 0.00277777);
       double Q = t - 1;
        R = Q * 1200;
        printf("The rate is %.2lf\n", round(R));

    }




    return 0;
}
