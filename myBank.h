#ifndef __MY_BANK__H
#define __MY_BANK__H

#include<stdio.h>

double account[50][2];


void OpenAccount();//this function open account if we have more then 50 account we stop and then we full 
void Balance_Inquiry();//this function checking the account only if we have account 
void Deposit(); //this function check if we have account then we set the the money and update the account 
void Withdrawal();//this function checking if we have acoount then we check if we have money there then if we want poll the money we can poll
void CloseAccount();//check if we have account the we can close the account 
void Interest();//if we have opnning account we add 1% Interest
void Print();//if we have opnning account we print them balance
void Exit();//exit the program 

#endif
