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
     
     F = 0;
     S = n - 1;
     x *= 10000000;

     
    int found = 0;
     while(F<S)
     {
       if(lengths[F] + lengths[S] == x) {
         printf("Found: %i + %i == %i\n", lengths[F], lengths[S], x);
         found = 1;
         return 1;
       }
       else if(lengths[F] + lengths[S] < x){
         F++;
       }
       else
       {
         S--;
       }
     }
     if(found == 0)
     {
        printf("No matching pair found"); 
     }

  return 0;

}
