#include <stdio.h>
#define MAX_MSG_LEN 256

int main(void)
{
     char msg[MAX_MSG_LEN+1];
     int j;

     fgets(msg, MAX_MSG_LEN, stdin);

    /* write your solution here ... */
    
    // initilation i to keep count of the array
   int i = 0;
   
   // loop through the array
   while(msg[i] != '\0')
  {
      //checking if it contains any of the quantation marks 
      if(msg[i] == 33 || msg[i] == 39 || msg[i] == 63 || msg[i] == 59 || msg[i] == 58 || msg[i] == 44 || msg[i] == 46)
       {
       //giving the j value of i to repersent the position in the array
         j=i;
         
        // if so we replace it withe second part using a while loop
         while(msg[j+1] != '\0')
       {
           //replace it with the one after it
           msg[j]=msg[j+1];
          j++;
 
       }
       
       }
      // else increament 
      else 
        i++;
  }
  
  //printing out 
   printf("%s", msg);
    return 0;

}
