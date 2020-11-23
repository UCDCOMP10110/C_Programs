#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 500

int main(void)
{
  // declaring variables
  int a[MAX_SIZE];
  int unique_vals[MAX_SIZE], counts[MAX_SIZE];
  int i, j;
  bool counted[MAX_SIZE];
  int num_unique = 0;
  int v,N, max = 0, ind;
  
  // getting input from the user for the size
  scanf("%d", &N);
  
  // getting input from the user for the numbers in the array
  for (i=0;i<N;i++)
    {
        counted[i] = false;
        counts[i] = 0;
        scanf("%d", &a[i]);
    }
   
   //outer loop, loops through the whole numbers in the arrays
   for(i=0;i<N;i++)
   {
      // setting each value in V
      v = a[i];
      //checking the number if it has been counted or not
      if(!counted[i])
      {
          //adding the amount it counted
          counts[num_unique]++;
          counted[i] = true;
          //looping throught the whole array again to check if it is repeated if so we incremanate it
          for(j=i+1;j<N;j++)
          {
              if(a[j] == v)
              {
                  counted[j] = true;
                  counts[num_unique]++;
              }
          }
          //saving the number v in an unique array that holds all the unique values 
        unique_vals[num_unique++] = v;
      }
   }
   //looping again to save the most repeated number in a variable called max and saving that number in ind 
   for(i=0;i<num_unique;i++)
   {
       if(counts[i] > max)
       {
          ind = unique_vals[i]; 
          max = counts[i];
       }
   }
   //conditions 
   if(max > N/2)
     {
       printf("%d appears more than %d times in the array.",ind, N/2);
      }
      else if(max <= N/2)
           {
              printf("No value appears more than %d times in the array.", N/2);
           }
  
    
    

    

    return 0;
}
