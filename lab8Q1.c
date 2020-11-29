#include <stdio.h>
#define MAX_SIZE 5000



int main(void)
{
  int N; //size of teh array
  int a[MAX_SIZE]; //the array
  int value; // contains the value
  int count; //keeps count of each element 
  int i; //keeps count of the array
  
  scanf("%d",&N);
  for (i=0;i<N;i++)
    {
      scanf("%d", &a[i]);
    }

  count = 0; // set count to 0
  for (i=0;i<N;i++) //loops through the array
    {
      if (count == 0) //checks if count is eqaul to zero if so count it
	value = a[i]; //saves the value number in vale
      if (a[i]==value) //checks if it occured again incremeant it
	count++;
      else // if not we desincreament 
	count--;
    }
  
  count = 0; //doing the count around it
  for (i=0;i<N;i++)
    if (a[i] == value)
      count++;

  if (count>=(N/2+1)) //print out if the value is greater then half of the arrary
    printf("%d appears more than %d times in the array.\n", value, N/2);
  else //if not prints this out
    printf("No value appears more than %d times in the array.\n", N/2);

  return 0;
}
