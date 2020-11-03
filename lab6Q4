#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*assigning variables*/
    int a[10];
    int N, i;
    /*get input from user*/
    scanf("%d", &N);
    printf("%d in base 2 is ", N);
    /*using in case its 0*/
    if(N == 0){
        printf("0");
    }
    /*using whole loop to devide and get the reminder and save the value in the array.*/
    for(i = 0; N> 0; i++)
    {
        a[i]= N%2;
         N=N/2;
    }
    /*inversing the value in the array and printing the result.*/
    for(i=i-1; i>=0; i--)
    {
    printf("%d",a[i]);
    }
    /*stops the programm*/
    return 0;
}
