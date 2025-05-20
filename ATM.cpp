#include<stdio.h>
#include<stdlib.h>
void main()
{
    int balance=70000;
    int PIN=1234;
    int enteredPIN;
    int selectednumber; 

    printf("*****Welcome to ATM*****\n");

    printf("\nEnter your PIN to proceed:");
    scanf("%d",&enteredPIN);
    if(PIN != enteredPIN)
    {
        printf("\n");
        printf("Incorrect PIN!!!\n");
        exit(0);
    }

   printf("\nCorrect PIN!!!\n");
   
   while(1)
   {
   printf("\nHow can I help you?\n");
   printf("1.)Check Balance\n");
   printf("2.)Withdraw Cash\n");
   printf("3.)Deposite Cash\n");
   printf("4.)Exit\n");
   printf("Select from the above to proceed:");
   scanf("%d",&selectednumber);
   
   
   
   if(selectednumber ==1)
   {
        printf("\nYour current Balance is : %d\n",balance);   //To check current balance
   }

  else if(selectednumber == 2)
   {
       int amount;
       printf("\nEnter the amount you want to withdraw:");
       scanf("%d",&amount);
       if(amount>balance)
       {
           printf("Insufficient Balance"\n);
       }
       else
       {
       balance -= amount;
       printf("Your balance after withdraw:%d\n",balance);   //To check balance after withdrawal
       }
       break;
   }

   else if(selectednumber == 3)
   {
        int amount;
        printf("\nYour amount you want to deposite :");
        scanf("%d",&amount);
         balance += amount;
        printf("Your balance after deposite:%d\n",balance);   //To check baance after deposite
    
   }

   else if(selectednumber ==4)
   {
      printf("Visit Again\n");                              // To exit 
      break;       
   }
  
  else
  {
      printf("\nInvalid selection\n");
  }
   }


}

