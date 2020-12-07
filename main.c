#include <stdio.h>
#include "myBank.h"

 int main(){
 char ch;
 int flag=0;
    while(ch!='E'&&flag!=1){
        printf("Please choose a transaction type:\n");
        printf("O-Open Account\n");
        printf("B-Balance Inquiry\n");
        printf("D-Deposit\n");
        printf("W-Withdrawal\n");
        printf("C-Close Account\n");
        printf("I-Interest\n");
        printf(" P-Print\n");
        printf(" E-Exit\n");
        scanf(" %c", &ch);
   switch(ch)
  // other;
     {
     case 'O':
              OpenAccount();
              break;
     case 'B':
             Balance_Inquiry();
               break;
     case 'D':
              Deposit();
          break;
     case 'W':
             Withdrawal();
              break;
     case 'C':
             CloseAccount();
              break;
     case 'I':
             Interest();
              break;
     case 'P':
            Print();
              break;
     case 'E':
              Exit();
              flag=1;
                 break;
     default :
        printf("Invalid input \n");  
     }
     }
     return 0;
     }
     
     
    
     
