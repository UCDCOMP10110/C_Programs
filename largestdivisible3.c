#include <stdio.h>
#define MAX_SIZE 100
int main(void) {

    int array[MAX_SIZE];
    int i;
    int N;
    /* declare some extra variables as needed here */
    int max = 0;
    int index;
    /* do not change this part of the program that reads in the
       array from the user */
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%d", &array[i]);
    }

    /* complete the program here */
    for(i = 0; i < N; i++)
    {
        if(array[i] % 3 == 0 )
        {

               if(array[i] > max)
               {
                max = array[i];
                index = i;

               }
        }
    }
    if(max != 0){
    printf("The largest value divisible by 3 is %d\n", max);
    printf("The position of the max value %d\n", index);}
    if(max == 0)
        { printf("No value in the array is divisible by 3");}
    return 0;
}
