#include <stdio.h>
#include <windows.h>
#include <time.h>

int main(void)
{

    system("color 4F");
    int pin = 2063, option, enteredPin, count = 0, amount = 1;
    float balance = 5000;
    int continueTransaction = 1;

    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t       %s", ctime(&now));
    printf("\n\t\t\t\t\t===================*Welcome ya 3abd to ATM*=====================");

    while(pin != enteredPin)
    {
        printf("\nPlease enter you pin: ");
        scanf("%d", &enteredPin);
        if(enteredPin != pin)
          {
            Beep(610,500);
            printf("Invalid pin!!!");
          }
          count++;
          if(count == 4 && pin != enteredPin)
          {
              exit(0);
          }
    }
    /*asking user to chose and looping*/
    while(continueTransaction != 0){
    printf("\n\t\t\t\t\t================*Available Transactions*================");
    printf("\n\n\t\t1.Withdraw1");
    printf("\n\t\t2.Deposit");
    printf("\n\t\t3.Check Balance");
    printf("\n\n\tPlease select an option: ");
    scanf("%d", &option);

    /*options result and computing*/
    switch(option){
    case 1:

        printf("\n\t\tEnter the amount: ");
        scanf("%d", &amount);

        if(balance < amount)
        {
            printf("\n\t you have less money go work money do not come from sleeping");
            amount = 1;
            break;
        }
        else
        {

            balance -= amount;
            printf("\n\t\tYou have withdraw %d Saudi Riyal . Your new balance is %.2f Saudi Riyal", amount,balance);
            printf("\t\t\t\t\t============Thank you for banking with me============");
            amount = 1;
            break;
        }
    case 2:
        printf("\n\t\t Please enter the amount: ");
        scanf("%d", &amount);
        balance += amount;
        printf("\n\t\t You have deposited %d ,.your new balance is %.2f Saudi Riyal\n", amount,balance);
        printf("\t\t\t\t\t============Thank you for banking with me============");
        amount = 1;
        break;


    case 3:
        printf("\n\t\tYour balance is %.2f",balance);
        break;

    default:
        Beep(610,500);
        printf("\n\t\tInvalid Option!!!");
    }

    printf("\n\t\tDo you wish to perform another transaction?Press 1[YES], 0[NO]");
    scanf("%d", &continueTransaction);

}}
