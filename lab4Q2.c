#include <stdio.h>

#include <math.h>

int main(void)
{
  // declaring the variables
  double a, b, c;
  double pRoot, nRoot, roots;
  double evaluate1, evaluate2;

  //getting input from the user that required 
  printf("Please enter the value for coefficient a:\n");
  scanf("%lf", &a);
  printf("Please enter the value for coefficient b:\n");
  scanf("%lf", &b);
  printf("Please enter the value for coefficient c:\n");
  scanf("%lf", &c);
  
  // computing
  roots = (b * b) - (4.0 * a * c);
  nRoot = (- b - sqrt((pow(b, 2.0)) - (4.0 * a * c))) / (2.0 * a);
  pRoot = (2*c)/(-b - sqrt((b*b) - (4*a*c)));
  evaluate2 = (a * nRoot * nRoot) + (b * nRoot) + c;
  evaluate1 = (a * pRoot * pRoot) + (b * pRoot) + c;  
 
   //checing the condition for the real roots and printing the results
  if(roots > 0)
  {
  printf("The number of real roots is 2.\n");
  printf("The value of the first root is %.10lf.\n", pRoot);
  printf("The value of the quadratic equation evaluated at %.10lf is %.6lf.\n", pRoot, evaluate1);
  printf("The value of the second root is %.10lf.\n", nRoot);
  printf("The value of the quadratic equation evaluated at %.10lf is %.6lf.\n", nRoot, evaluate2);
  return 0;
  }

  //
  if(roots == 0){
  printf("The number of real roots is 1.\n");
  printf("The value of the first root is %.10lf.\n", pRoot);
  printf("The value of the quadratic equation evaluated at %.10lf is %.6lf.\n", pRoot, evaluate1);
  return 0;
  }
  if (roots < 0)
  {
  printf("The number of real roots is 0.\n");
  return 0;
  }

//exit
return 0;
}
