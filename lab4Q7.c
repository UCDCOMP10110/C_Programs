#include <stdio.h>
#include <math.h>

int main(void){
   
   // declaring variables
   double P, R, Y; 
   double K = 12;
   double A, pick;
   
  //asking user too choose which one they want to compute and save it
   printf("Which value would you like to compute: 1) Amount 2) Principal 3) Rate 4) Number of years\n");
   printf("Select either 1, 2, 3 or 4.\n");
   scanf("%lf", &pick);
   
  //if they somthing else then the options will return invalide
   if( !(pick == 1 || pick == 2 || pick == 3 || pick == 4 )){
    printf("Invalid option.\n");
    return 0;
   }

  //computings and printing the result out
    else if(pick == 1 ){
  printf("Please enter the principal:\n");
    scanf("%lf", &P);
    if( P < 0 ){
        printf("Invalid principal.");
        return 0;
    }
    printf("Please enter the rate:\n");
    scanf("%lf", &R);
    if( !(0 < R && R <= 100) ){
        printf("Invalid rate.");
        return 0;}
     printf("Please enter the number of years:\n");
     scanf("%lf", &Y);
     if(!(Y > 0)){
        printf("Invalid number of years.");
        return 0;}

     else{

        A = pow((1.0 + R/(100*K)) , Y*K)*P;
        printf("The amount is %.2f\n", A);

    }
   }else if(pick == 2){
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
   }else if(pick == 3){
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

   }else if(pick == 4){
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

     else{

        Y = (log(pow((A/P),(1/12.0))))/(log(1+(R/(100*12.0))));
        printf("The number of years is %.2lf\n", Y);

    }

   }
   
   
   //exit
   return 0;
}
