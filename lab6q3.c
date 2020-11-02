/*lab6Q3*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* assign variables in integers */
    int i;
    int before;
    before = 1;
    int prev;
    prev = 0;
    int current;
    current = 0;
    int pell;

    /* ask the user to enter how many pell numbers to print*/

    printf("Enter how many pell numbers to print:\n");
           scanf("%d", &pell);
    if(pell > 0){
    printf("%d ",current);
    }
    /* compute the value using the formula and looping */
    for(i = 1 ; i < pell; i++)
     {
      current = before + 2*prev;

      /*print the value and save it */

      printf("%d ", current);

      /* update and shift */

      before = prev;
      prev = current;
     }


     printf("\n");
     return 0;


}
