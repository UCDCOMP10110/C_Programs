#include <stdio.h>
#define MAX_MSG_LEN 256

int main(void)
{

  char perm[] = "qjczieaungsdfxmphybklortvw";
  char msg[MAX_MSG_LEN+1];

  fgets(msg,MAX_MSG_LEN,stdin);
  
  /* write the answer here ... */

  // declaring two variables to reperesent the position in the array 
  int i = 0;
  int j;
  
  //doing outher while loop to go through array
  while(msg[i] != '\0')
    {
      // checking if its a lower case alphabate  
      if(msg[i] >= 'a' && msg[i] <= 'z')
        {
          // if so we check where it occurse using a while loop
          j = 0;
          while(perm[j] != '\0')
            {
               // if that position in that array is equal to the perm we give it that value added with a
               if(msg[i] == perm[j])
                  {
                      msg[i] = j + 'a';
                      break;
                  }
                  // if not it increament j and keeps looping for the next value in perm
              j++;
            }
        }

      // checking if the position in array is an upper case in alphabate    
      else if(msg[i] >= 'A' && msg[i] <= 'Z')
        {
          j = 0;
          // if so we check where it occurse using a while loop
          while(perm[j] != '\0')
            {
              // if that position in that array is equal to the perm we give it that value added with A
               if(msg[i] == (perm[j] - ('a' - 'A')))
                  {
                      msg[i] = j + 'A';
                      break;
                  }
                  // if not it increament j and keeps looping for the next value in perm
              j++;
            }
        }

      

      i++; 
    }
   

   printf("%s ", msg);
  return 0;
}
