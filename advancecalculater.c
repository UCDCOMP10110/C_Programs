#include <stdio.h>
#include <math.h>
/*creating a more advanced calculater*/


int main(void)
{
    /*assign the variables*/
   double num1;
   double num2;
   char op;
    /*get the inputs from the user*/
   printf("Enter a number: ");
   scanf("%lf", &num1);

   printf("Enter operater: ");
   scanf(" %c", &op);

   printf("Enter a number: ");
   scanf("%lf", &num2);

   /*the condition and the result*/
   if(op == '+'){
     printf("%f", num1 + num2);
   }else if(op == '-'){
     printf("%f", num1 - num2);
   }else if(op == '/'){
     printf("%f", num1 / num2);
   }else if(op == '*'){
     printf("%f", num1 * num2);
   }else{
     printf("not valid syntax");
   }


  return 0;
}
