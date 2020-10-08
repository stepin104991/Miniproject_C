#ifndef __MAIN_H__
#define __MAIN_H__

#include <vending_machine.h>
int main()
{
 int intro;
 int option;
 int money;
 int temp;
 int choc[10]={0,1,2,3,4,5,6,7,8,9};

e:menu();

 printf("Enter Your Option: ");
 //fflush(stdin);
 scanf("%d",&intro);
 printf("\n");

 if(intro==1)
 {

w:printf("----------------------------------------------------------\n\n");
  printf("Chocolates\n\n");
  printf("----------------------------------------------------------\n");
  printf("1.Choose Chocolate\n");
  printf("2.View A Price To Be Paid\n");
  printf("3.Back To Main Menu\n\n");

  printf("Rules: You can pay using Cash or Credit/Debit card! \n\n\n");

  printf("Enter Your Option: ");
  //fflush(stdin);
  scanf("%d",&option);
  printf("\n\n");

  if(option==1)
  {
   system("cls");
   printf("Name list of chocolate: ");
   printf("\n\n");
   printf("1. Cadbury Dairy Milk");             printf("\t\t50.00\n");
   printf("2. Kitkat");                         printf("\t\t\t20.00\n");
   printf("3. Snickers");                       printf("\t\t\t20.00\n");
   printf("4. Gems");                           printf("\t\t\t\t05.00\n");
   printf("5. Mars");                           printf("\t\t\t\t25.00\n");
   printf("6. Munch");                          printf("\t\t\t10.00\n");
   printf("7. Bounty");                         printf("\t\t\t30.00\n");
   printf("8. Milky Bar");                      printf("\t\t\t10.00\n");
   printf("9. M&M");                            printf("\t\t\t\t25.00\n");
   printf("10.Barone");                        printf("\t\t\t10.00\n");
   printf("\n\n");

   printf("Choose Chocolate: ");
   //fflush(stdin);
   scanf("%d",&choice);
   printf("\n\n");

   switch(choice)
   {
    case 1 :
     printf("You chose Cadbury Dairy Milk\n\n");
     payment=50;
     goto w;
    case 2 :
     printf("You chose Kitkat\n\n");
     payment=20;
     goto w;
    case 3 :
     printf("You chose Snickers\n\n");
     payment=20;
     goto w;
    case 4 :
     printf("You chose Gems\n\n");
     payment=5;
     goto w;
    case 5 :
     printf("You chose Mars\n\n");
     payment=25;
     goto w;
    case 6 :
     printf("You chose Munch\n\n");
     payment=10;
     goto w;
    case 7 :
     printf("You chose Bounty\n\n");
     payment=30;
     goto w;
    case 8 :
     printf("You chose Milky Bar\n\n");
     payment=10;
     goto w;
    case 9 :
     printf("You chose M&M\n\n");
     payment=25;
     goto w;
    case 10 :
     printf("You chose Barone\n\n");
     payment=10;
     goto w;

    default : goto e;
   }
  }
  else if(option==2)
  {
    switch(choice)
   {
    case 1 :
     payment = 50;
     printf("Price to be paid is 50.00\n\n");
     goto w;
    case 2 :
      payment = 20;
     printf("Price to be paid is 20.00\n\n");
     goto w;
    case 3 :
     payment = 20;
     printf("Price to be paid is 20.00\n\n");
     goto w;
    case 4 :
      payment = 5;
     printf("Price to be paid is 5.00\n\n");
     goto w;
    case 5 :
     payment = 25;
     printf("Price to be paid is 25.00\n\n");
     goto w;
    case 6 :
     payment = 10;
     printf("Price to be paid is 10.00\n\n");
     goto w;
    case 7 :
     payment = 30;
     printf("Price to be paid is 30.00\n\n");
     goto w;
    case 8 :
    payment = 10;
     printf("Price to be paid is 10.00\n\n");
     goto w;
    case 9 :
     payment = 25;
     printf("Price to be paid is 25.00\n\n");
     goto w;
    case 10 :
     payment = 10;
     printf("Price to be paid is 10.00\n\n");
     goto w;
    default : goto e;
   }
  }
  else
   goto e;
 }

 else if(intro==2)
 {

   if(choice==1)
   {
    printf("Your payment is Rs.50");
    printf("\n\n");
    choc[0]=payment;
   }
   if(choice==2)
   {
    printf("Your payment is Rs.20");
    printf("\n\n");
    choc[1]=payment;
   }
   if(choice==3)
   {
    printf("Your payment is Rs.20");
    printf("\n\n");
    choc[2]=payment;
   }
   if(choice==4)
   {
    printf("Your payment is Rs.5");
    printf("\n\n");
    choc[3]=payment;
   }
   if(choice==5)
   {
    printf("Your payment is Rs.25");
    printf("\n\n");
    choc[4]=payment;
   }
   if(choice==6)
   {
    printf("Your payment is Rs.10");
    printf("\n\n");
    choc[5]=payment;
   }
   if(choice==7)
   {
    printf("Your payment is Rs.30");
    printf("\n\n");
    choc[6]=payment;
   }
   if(choice==8)
   {
    printf("Your payment is Rs.10");
    printf("\n\n");
    choc[7]=payment;
   }
   if(choice==9)
   {
    printf("Your payment is Rs.25");
    printf("\n\n");
    choc[8]=payment;
   }
   if(choice==10)
   {
    printf("Your payment is Rs.10");
    printf("\n\n");
    choc[9]=payment;
   }
   MakePayment();
   goto e;
 }

  else if(intro==3)
  {
    chocolate();
    goto e;
  }
 else if(intro==4)
 {
  printf("Enjoy it!");

   if(choice==0)
   {
    printf("Thank you and enjoy your Cadbury Dairy Milk!");
    printf("\n\n");
    choc[0]=0;
    goto e;
   }
   if(choice==1)
   {
    printf("Thank you and enjoy your Kitkat!");
    printf("\n\n");
    choc[1]=0;
    goto e;
   }
   if(choice==2)
   {
    printf("Thank you and enjoy your Snickers!");
    printf("\n\n");
    choc[2]=0;
    goto e;
   }
   if(choice==3)
   {
    printf("Thank you and enjoy your Gems!");
    printf("\n\n");
    choc[3]=0;
    goto e;
   }
   if(choice==4)
   {
    printf("Thank you and enjoy your Mars!");
    printf("\n\n");
    choc[4]=0;
    goto e;
   }
   if(choice==5)
   {
    printf("Thank you and enjoy your Munch!");
    printf("\n\n");
    choc[5]=0;
    goto e;
   }
   if(choice==6)
   {
    printf("Thank you and enjoy your Bounty!");
    printf("\n\n");
    choc[6]=0;
    goto e;
   }
   if(choice==7)
   {
    printf("Thank you and enjoy your Milky Bar!");
    printf("\n\n");
    choc[7]=0;
    goto e;
   }
   if(choice==8)
   {
    printf("Thank you and enjoy your M&M!");
    printf("\n\n");
    choc[8]=0;
    goto e;
   }
   if(choice==9)
   {
    printf("Thank you and enjoy your Barone!");
    printf("\n\n");
    choc[9]=0;
    goto e;
   }
   else
   {
    printf("Error! Try Again.\n\n");
    goto e;
   }
 }
  else
  end();
return 0;
}

#endif
