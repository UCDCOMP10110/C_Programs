//rock, paper & scissors -
#include <stdio.h>
#include <stdlib.h>
#define ROCK 1
#define SCISSOR 2
#define PAPER 3


int main(void)
{
   int i;
   int randNum;
   int seed;
   int Pscore = 0;
   int Cscore = 0;
   int choice;

   printf("Enter a seed for the random number generator.\n");
   scanf("%d", &seed);


   srand(seed);


   for (i = 0; i< 10; i++)
    {
        randNum = rand()%3+1;
        printf("Please choose 1 for ROCK,2 for SCISSORS OR 3 for PAPER.\n");
        scanf("%d", &choice);
        if (choice == ROCK && randNum == PAPER){
                printf("User choice is ROCK.\n");
                printf("Computer choice is PAPER.\n");
                printf("Computer wins because PAPER beats ROCK.\n");
                Cscore = Cscore + 1;

         }else if(choice == ROCK && randNum == SCISSOR){
                 printf("User choice is ROCK.\n");
                 printf("Computer choice is SCISSORS.\n");
                 printf("User wins because ROCK beats SCISSORS.\n");
                 Pscore = Pscore + 1;

         }else if(choice == ROCK && randNum == ROCK){
                 printf("User choice is ROCK.\n");
                 printf("Computer choice is ROCK.\n");
                 printf("It's a draw. Computer chose ROCK and User also chose ROCK.\n");

         }else if(choice == PAPER && randNum == SCISSOR){
                 printf("User choice is PAPER.\n");
                 printf("Computer choice is SCISSORS.\n");
                 printf("Computer wins because SCISSORS beats PAPER.\n");
                 Cscore = Cscore + 1;

         }else if(choice == PAPER && randNum == ROCK){
                 printf("User choice is PAPER.\n");
                 printf("Computer choice is ROCK.\n");
                 printf("User wins because PAPER beats ROCK.\n");
                 Pscore = Pscore + 1;

         }else if(choice == PAPER && randNum == PAPER){
                 printf("User choice is PAPER.\n");
                 printf("Computer choice is PAPER.\n");
                 printf("It's a draw. Computer chose PAPER and User also chose PAPER.\n");

         }else if(choice == SCISSOR && randNum == ROCK){
                 printf("User choice is SCISSORS.\n");
                 printf("Computer choice is ROCK.\n");
                 printf("Computer wins because ROCK beats SCISSORS.\n");
                 Cscore = Cscore + 1;

         }else if(choice == SCISSOR && randNum == PAPER){
                 printf("User choice is SCISSORS.\n");
                 printf("Computer choice is PAPER.\n");
                 printf("User wins because SCISSORS beats PAPER.\n");
                 Pscore = Pscore + 1;

         }else if(choice == SCISSOR && randNum == SCISSOR){
                 printf("User choice is SCISSORS.\n");
                 printf("Computer choice is SCISSORS.\n");
                 printf("It's a draw. Computer chose SCISSORS and User also chose SCISSORS.\n");

         }else{
                  printf("wrong answer\n");
    }
    }

      if(Cscore < Pscore ){
        printf("In 10 games, computer won %d times and user won %d time.\n", Pscore, Cscore);
      }else if(Cscore > Pscore ){
        printf("In 10 games, computer won %d times and user won %d time.\n", Cscore, Pscore);
      }if(Cscore == Pscore ){
        printf("No winner its a draw!\n");
      }

    return 0;
}
