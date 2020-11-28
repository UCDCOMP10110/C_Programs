#include <stdio.h>
#include <stdlib.h>

#define N 1000000

int main(void)
{
  
  int n;  /* The number of lengths */
  int x; /* The target length */
  int lengths[N]; /* The array of available lengths */
  int i;
  int whichfile=1;
  int F;
  int S;
  FILE *fp;

  scanf("%d", &whichfile);
  
  switch (whichfile) {
     case 1:
        fp = fopen("testcase_small_sorted.txt", "r");
        break;
    case 2:
        fp = fopen("testcase_large_sorted.txt", "r");
        break;
    case 3:
        fp = fopen("testcase_small_nomatch_sorted.txt","r");
        break;
    case 4:
        fp = fopen("hidden_small_sorted.txt","r");
        break;
    case 5:
        fp = fopen("hidden_large_sorted.txt","r");
        break;
      
  }

  fscanf(fp, "%d", &x);
  fscanf(fp, "%d", &n);

  for (i=0;i<n;i++)
    fscanf(fp, "%d", &lengths[i]);
  

  fclose(fp);

  /* Now all the input data has been read in 
     search for the required pair of lengths... */
     /*setting the start and end*/
     F = 0;
     S = n - 1;
  
     /*change x to the correct unit*/
     x *= 10000000;

    /*using the flag method*/
    int found = 0;
   /*looping while first value is less then the second value in the array*/
     while(F<S)
     {
       /*if the two sum that adds to the target value are found we print them out and we give the found(flage) a value of 1*/
       if(lengths[F] + lengths[S] == x) {
         printf("Found: %i + %i == %i\n", lengths[F], lengths[S], x);
         found = 1;
         return 1;
       }
       /*if we didn't find the numbers we check if the value is less then the target if so we increament the first value to the next vlue of the array*/
       else if(lengths[F] + lengths[S] < x){
         F++;
       }
       /*if its bigger we dis increament the value in the array to the ext lower value in the array*/
       else
       {
         S--;
       }
     }
  /*if no value is found then we print this*/
     if(found == 0)
     {
        printf("No matching pair found"); 
     }

  return 0;

}
