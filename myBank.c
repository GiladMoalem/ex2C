#include "myBank.h"
#include <stdio.h>

//openAcount function
int openAccount(float amount){
if(amount >= 0){
for(int i=0; i<50; i++){
  if(arr[0][i] == 0){
  arr[1][i] = amount;
  printf("New account number is: %d \n " ,i+901 );
  arr[0][i] = 1;
  return (i+901);
  }
}
printf("There is no available account");
return -1;
}
printf("Invalid amount \n"); 
return -1;//no space for new acount
}

//ITRA function
float itra(int account_number){
if(account_number<901 || account_number>950){
printf("Invalide transaction type \n");  
return -1;
}
account_number -= 901;
if (arr[0][account_number] == 1){
//printf("myBank.c %f \n" ,arr[1][account_number]); 
printf("The balance of account number %d is: %0.2f \n",account_number+901 ,arr[1][account_number]); 
return (arr[1][account_number]) ;
}
printf("This account is closed \n");  
return -1;
}

//new itara function
float itraNew(int account_number, float amount){
if(account_number<901 ||account_number>950){
//printf(""); 
return -1;
}
int i=account_number-901;
if(arr[0][i]==0){
printf("This account dossnt agsist \n");
return -1;
}
arr[1][i] += amount;
//printf("");
return arr[1][i];
}

//MESHICHA function
float meshicha(int account_number, float amount){
if(account_number<901 || account_number>950){
//printf(); 
return -1;
}
int i = account_number-901;
if(arr[0][i] == 1){
if(arr[1][i] >= amount){
arr[1][i] -= amount;
printf("The new balance is: %0.2f \n",arr[1][i]);
return arr[1][i];
}else{
printf("Cannot can withtraw more than the balance \n");
return -1;
}
}
return -1;
}

//close account function
void closeAccount(int account_number){
if(account_number<901 || account_number>950){
 return;
}
int i = account_number - 901;

if(arr[0][i] == 1){
arr[0][i] = 0;
arr[1][i] = 0;
printf("Closed account number: %d \n",account_number);
}
}

//ribit function
void ribit(int interest_rate){
if(interest_rate<0){
printf("Failed to read the interest rate \n");
return;
}
for(int i=0; i < 50; i++){
if(arr[0][i] == 1){
arr[1][i] += (arr[1][i] * interest_rate /100);
}
}
}

//print function
void printAccount(){
for(int i=0; i<50; i++){
if(arr[0][i]==1){
printf("The balance of account number %d is: %0.2f \n", i+901, arr[1][i]);
} 
}
}

//remove all accounts
void removeAllAccount(){
for(int i = 0; i < 50; i++){
arr[0][i] = 0;
arr[1][i] = 0;
}
}

