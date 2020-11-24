#include <stdio.h>

#define MAX_MSG_SIZE 256
void capitalise(char str[]);
int main(void)
{
  char msg[MAX_MSG_SIZE+1];
  /* the fgets function is used to read a string from the console */
  fgets(msg, MAX_MSG_SIZE, stdin);
 
  /* complete your answer here */
  
  capitalise(msg);


  printf("%s", msg);
  


  return 0;
}
/*programming a function that converts all smaller case letters to uppercase*/
void capitalise(char str[])
{
  int i = 0;
    //looping through the array 
   while(str[i] != '\0')
   {
   //checking if its an lower case we minuse by 32 which change it to uppercase and incremeant the i for the next postion in the array    
     if(str[i] >= 'a' && str[i] <='z')
     {
       str[i] = str[i] - 32;
     }
     i++;
   }

}
