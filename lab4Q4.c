#include <stdio.h>
#include <math.h>


int main(void){

    double P, R, Y;
    double K = 12;
    double A;


    printf("Please enter the amount:\n");
    scanf("%lf", &A);
    if( A < 0 ){
        printf("Invalid amount.");
        return 0;
    }
    printf("Please enter the rate:\n");
    scanf("%lf", &R);
    if( !(0 <= R && R <= 100) ){
        printf("Invalid rate.");
        return 0;}
     printf("Please enter the number of years:\n");
    scanf("%lf", &Y);
    if(!(Y > 0)){
        printf("Invalid number of years.");
        return 0;}

     else{

        P = A/pow((1.0 + R/(100*K)) , Y*K);
        printf("The principal is %.2f\n", P);

    }




    return 0;
}
