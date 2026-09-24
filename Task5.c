#include <stdio.h>

int main(){

  // int Balance_inquiry, Cash_withdrawl, Cash_deposit, PIN_change;
  int input;
   printf("enter to Process further:\n1. Balance Inquiry \n2. Cash Withdrawl \n3. Cash Deposit \n4. PIN Change \n");
   scanf("%d", &input);
   
   int input2,input3;
   switch(input){
    case 1:
      printf("enter to Process further:\n1. Current Balance \n2. Concurrency\n");
      scanf("%d", &input2);
      switch(input2){
        case 1:
          printf("Current Balance");
          break;
        case 2:
          printf("Concurrency");
          break;  
      }
      break;
    
     case 2:
       printf("enter to Process further:\n1. Saving Account \n2. Current Account\n");
       scanf("%d", &input2);
       switch(input2){
        case 1:
          printf("Saving Account");
          break;
        case 2:
          printf("Current Account");
          break;  
       }
       break;

       case 3:
       printf("enter to Process further:\n1. View Deposited \n2. View Undeposited\n");
       scanf("%d", &input3);
       switch(input3){
        case 1:
          printf("View Deposit");
          break;
        case 2:
          printf("Undeposited");
          break;  
       }
       break;

       case 4:
       printf("\n PIN Changing");
       break;

       default:
        printf("Select appropriate option:");
        break;

   }

    return 0;
}