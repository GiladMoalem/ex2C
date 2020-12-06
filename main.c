#include <stdio.h>
#include "myBank.h"
/* 
 [ O-openAccount | B-itra | D-itraNew | W-meshicha | C-closeAccount |
 I-ribit | P-print | E-removeAllAccounts]
*/

int main(){

char c;

float x;
int n;


while(c!='E'){

printf("Please choose a transaction type: \nO-Open Account \nB-Balance Inquiry \nD-Deposit \nW-Withdrawal \nC-Close Account \nI-Interest \nP-Print \nE-Exit \n"); 
scanf(" %s", &c);


switch(c){

case 'O':
printf("Please enter amount for deposit: ");
if(scanf("%f",&x)==1){
openAccount(x);
}
else{
printf("Failed to read the amount \n");
scanf(" %s",&c);
}
break;

case 'B':
printf("Please enter account number: ");
if(scanf("%d", &n)==1){
itra(n);
}else{
printf("Failed to read the account number   \n");
scanf("%s",&c);
}
break;

case 'D':
printf("Please enter account number: ");

if(scanf("%d",&n)!=1){
printf("Failed to read the account number \n");
scanf(" %s",&c);
break;
}

if(n<901||n>950){
printf("Invalid account number \n");
break;
}

if(arr[0][n-901]==0){
printf("This account is closed \n");
break;
}

printf("Please enter the amount to deposit: ");
if(scanf("%f",&x)!=1){
printf("Failed to read the amount \n");
scanf("%s",&c);
break;
}
if(x<0){
printf("Cannot deposite a nagative amount \n");
break;
}
itraNew(n,x);
break;

case 'W':
printf("Please enter account number: ");
if(scanf("%d",&n)!=1){
printf("Failed to read the amount \n");
scanf("%s",&c);
break;
}
if(arr[0][n-901]!=1){
printf("This account is closed \n");
break;
}
if(n>950 ||n<901){
printf("Invalid account number \n");
break;
}
printf("Please enter the amount to withdraw: ");
if(scanf("%f",&x)!=1){
printf("Failed to read the amount \n");
scanf("%s",&c);
break;
}
meshicha(n,x);
break;

case 'C':
printf("Please enter account number: ");
if(scanf("%d",&n)!=1){
printf("Failed to read the account number \n");
scanf("%s",&c);
break;
}
if(n>950 ||n<901){
printf("Invalid account number \n");
break;
}
if(arr[0][n-901]!=1){
printf("This account is already closed \n");
break;
}
closeAccount(n);
break;


case 'I':
printf("Plese enter interest rate: ");
if(scanf("%d",&n)!=1){
printf("failed to read the interest rate \n");
scanf("%s",&c);
break;
}
ribit(n);
break;

case 'P':
printAccount();
break;

default:
printf("Invalid transaction type");
break;
}

printf("\n");
}

return 0;
}
