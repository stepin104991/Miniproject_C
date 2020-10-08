#include <vending_machine.h>
void menu(void)
{
  printf("*********************************************************************************************\n\n");
  printf("\t\t\t|WELCOME TO CHOCOLATES VENDING MACHINE|\n\n");
  printf("*********************************************************************************************\n");

  printf("1.Select the Chocolates\n");
  printf("2.Make payment\n");
  printf("3.View payment bill\n");
  printf("4.Exit Vending Machine\n");
  printf("5.Exit Program\n\n");
}

void MakePayment()
{
    int option, money;
    printf("Select the Payment method\n");
    printf("1.Cash\n");
    printf("2.Credit/Debit card\n");
    scanf("%d", &option);
    if (option == 1)
    {
        printf("Enter your money: ");
        //fflush(stdin);
        scanf("%d",&money);
        PayByCash(money, payment);
    }
    else
    {
        int pin;
        printf("Insert your Debit/Credit card\n");
        printf("Enter the 4-digit PIN\n");
        //fflush(stdin);
        scanf("%d", &pin);
        PayByCard(pin);
    }
}

int PayByCash( int money, int payment )
{
  if (money < payment)
  {
    printf("\nInsufficient money \n Try again!!!\n");
   return -1;
  }
  else if(money=payment){
    printf("\nPayment made successfully\n");
  }
  else
  {
   printf("Your Balance: %d\n\n", money - payment);
   printf("Please collect your cash\n\n");
   return 1;
  }
}

int PayByCard(int pin)
{
  int n,count=0; 
  n=pin;
  while (n != 0) 
  { 
        n = n / 10; 
        ++count; 
    } 
   if (count==4)
   {
       int bal=1000;
       printf("Payment made successfully..\n");
       printf("Your Balance: %d\n\n\n", bal-payment);
       return 2;
   }
   else
   {
       printf("Invalid PIN, Try Again\n\n");
       return 3;
   }
}

void chocolate(void)
{
 char choco[10][100] = {"Cadbury Dairy Milk", "Kitkat", "Snickers", "Gems", "Mars", "Munch", "Bounty", "Milky Bar", "M&M", "Barone"};
 int u[30];
 char o[30];
 FILE *choclot;
 choclot=fopen("parking.txt","a+");
 fprintf(choclot,"Chocolate: %s Total Price: %d\n\n",choco[choice - 1],payment);
 printf("Chocolate: %s\nTotal Price:%d\n",choco[choice-1],payment);
 fclose(choclot);
}


void end(void)
{
 system("cls");
 printf("\t\t\tTHANK YOU FOR USING THE VENDING MACHINE\n");
}
