#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5000

int main(void)
{
  int i, k, N;
  double a[MAX_SIZE];
  double threshold;
  FILE *fp;

  printf("Enter number of values to read from floats.txt\n");
  scanf("%d", &N);
  printf("Enter the threshold value\n");
  scanf("%lf", &threshold);
  printf("Enter the value of k\n");
  scanf("%d", &k);
  fp = fopen("floats.txt", "r");
  for (i = 0;i<N;i++)
    {
      fscanf(fp, "%lf", &a[i]);
    }
  fclose(fp);

  /* write your solution here */
  
  int q=0,z=0,j,maxindx;
  double b[MAX_SIZE],max,tmp;
  

   for(i = 0; i<N; i++)
   {
     if(a[i]<threshold)
        {
         b[q] = a[i];
         z++;
         q++;
        }
   }
   for(i = 0;i < z;i++)
   {
       a[i] = b[i];
   }

   

   if(z < k)
   {
       printf("The array does not contain %d numbers less than %.5lf", k, threshold);
       return 0;
   }

   for(j=0;j<k;j++)
   {
       max = a[j];
       maxindx=j;

       for(i=j+1;i<z;i++)
       {
           if(a[i]>max)
           {
               max = a[i];
               maxindx = i;
           }
       }

       tmp = a[j];
       a[j] = a[maxindx];
       a[maxindx] = tmp;

   }
    printf("The k=%d largest value in the array that is less than %.5lf is %.5lf", k, threshold, a[k-1]);


  return 0;
}
