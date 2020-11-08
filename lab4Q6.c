#include <stdio.h>
#include <math.h>


int main(void){
   // declaring variables 
    double P, R, Y;

    double A;

   // getting input from the user
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
     printf("Please enter the rate:\n");
    scanf("%lf", &R);
    if(!( 0 <= R && R <= 100)){
        printf("Invalid rate.");
        return 0;}
    // computing and printin the result 
     else{

        Y = (log(pow((A/P),(1/12.0))))/(log(1+(R/(100*12.0))));
        printf("The number of years is %.2lf\n", Y);

    }



    // exit
    return 0;
}
