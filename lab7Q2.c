#include <stdio.h>
#include <math.h>

#define MAX_SIZE 10000


int main(void)

{

  int a[MAX_SIZE];
  int N;

  int L;  /* the current size of the list */

   /* read in the upper limit. Keep reading until
     a valid number between 3 and the maximum that
     can be handled by the array is entered */

  printf("Enter the upper limit:\n");
  do {
      scanf("%d", &N);
    } while (N<3 || N>MAX_SIZE+2);

  /* write your solution here ... */
    int i, j,p, isPrime;
    L = 2;
    int temp = 2;
    a[0] = 2;
    a[1] = 3;

    for(i=0; i<N-2; i++)
		a[i] = i+2;

    //looping through the numbers to check weather it is a prime or not 
    for(i=5; i < N; i++)
    {
        //using a method similar to boolean (flag)
        isPrime = 1;


        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime it save its place in the array */
        if(isPrime==1)
        {
            a[temp] = i;
            temp++;
            L++;
        }
    }



  /* write out the result  - DO NOT CHANGE THIS */

  for(i=0;i<L;i++)
    printf("%d ",a[i]);

  printf("\n");

}
