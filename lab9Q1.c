#include <stdio.h>

#define MAX_STR_LEN 256
int main(void)
{
  /* keep the perm[] array fixed as it is here, though 
     your program should work for any permutation array */
  char perm[] = "qjczieaungsdfxmphybklortvw";
  
  char msg[MAX_STR_LEN+1];

  /* read the message from the terminal using fgets */
  fgets(msg, MAX_STR_LEN, stdin);

  /* write your answer here */
  
  // declaring variable i to repersent the postion in the array
  int i = 0;
  
  // looping through the array
  while(msg[i] != '\0')
   {
     //checking if the letter is a lower case if show change it with the postion in perm   
     if(msg[i] >= 'a' && msg[i] <='z')
     {
       msg[i] = perm[msg[i] - 97];
     }
     //checking if the letter is a upper case if show change it with the postion in perm
     else 
       if(msg[i] >= 'A' && msg[i] <='Z')
       {
         msg[i] = perm[msg[i] - 65] - 32;
       }
     i++;
   }
  //printing out the array
  printf("%s", msg);

  return 0;
}
