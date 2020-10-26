//rock, paper & scissors -
//declaring constant variables
#define ROCK  1      
#define PAPER  2
#define SCISSOR 3

//the main function
int main() {
   int random_Number , seed , User_choice , Player_Score = 0 , Computer_Score = 0;//declaring all the variables
  
   //asking the user input
   printf("Enter a seed for the random number genertor.\n"); // entering the seed for the program
   scanf("%d",&seed );
   srand(seed);

   //making a loop that goes 10 times
      for (int i = 0; i < 10; i++) {
          //assigning a variable with the randum number generater
          random_Number = rand()%3+1; // limiting the output for the genertor to be between 1 - 3

         //asking the user to choose and saving their coice in choic variable
          printf("please choice 1 rock for 2 for scissors and 3 for paper\n");
          scanf("%d", &User_choice); // demands a input from the user to either pick rock paper or scissors
          //continue it when its wrong 
          while (User_choice <=0 || User_choice > 3 ) {
            printf("invalid input\n");
            printf("please choice 1 rock for 2 for scissors and 3 for paper\n");
            scanf("%d", &User_choice);
          }

          //making the conditions for what they choose also counting the time they won

      if (User_choice == ROCK && random_Number == PAPER){
                printf("User choice is ROCK.\n");
                printf("Computer choice is PAPER.\n");
                printf("Computer wins because PAPER beats ROCK.\n");
                Computer_Score ++;
         }else if(User_choice == ROCK && random_Number == SCISSOR){
                 printf("User choice is ROCK.\n");
                 printf("Computer choice is SCISSORS.\n");
                 printf("User wins because ROCK beats SCISSORS.\n");
                 Player_Score ++;
         }else if(User_choice == ROCK && random_Number == ROCK){
                 printf("User choice is ROCK.\n");
                 printf("Computer choice is ROCK.\n");
                 printf("It's a draw. Computer chose ROCK and User also chose ROCK.\n");
         }else if(User_choice == PAPER && random_Number == SCISSOR){
                 printf("User choice is PAPER.\n");
                 printf("Computer choice is SCISSORS.\n");
                 printf("Computer wins because SCISSORS beats PAPER.\n");
                 Computer_Score ++;
         }else if(User_choice == PAPER && random_Number == ROCK){
                 printf("User choice is PAPER.\n");
                 printf("Computer choice is ROCK.\n");
                 printf("User wins because PAPER beats ROCK.\n");
                 Player_Score ++;
         }else if(User_choice == PAPER && random_Number == PAPER){
                 printf("User choice is PAPER.\n");
                 printf("Computer choice is PAPER.\n");
                 printf("It's a draw. Computer chose PAPER and User also chose PAPER.\n");
         }else if(User_choice == SCISSOR && random_Number == ROCK){
                 printf("User choice is SCISSORS.\n");
                 printf("Computer choice is ROCK.\n");
                 printf("Computer wins because ROCK beats SCISSORS.\n");
                 Computer_Score ++;
         }else if(User_choice == SCISSOR && random_Number == PAPER){
                 printf("User choice is SCISSORS.\n");
                 printf("Computer choice is PAPER.\n");
                 printf("User wins because SCISSORS beats PAPER.\n");
                 Player_Score ++;
         }else if(User_choice == SCISSOR && random_Number == SCISSOR){
                 printf("User choice is SCISSORS.\n");
                 printf("Computer choice is SCISSORS.\n");
                 printf("It's a draw. Computer chose SCISSOR and User also chose SCISSOR.\n");
         }else{
           printf("try again\n");
         }
      }
   //showing the amount of time the computer or user won
    printf("In 10 games, computer won %d times and user won %d times.\n", Computer_Score , Player_Score);
 //ending the program
  return 0;
}
