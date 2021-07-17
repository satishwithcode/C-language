#include<stdio.h>

int main(){
  int tax=0, income;
  printf("Enter your income\n");
  scanf("%d",&income);

  if(income>=250000 && income<=500000){
    tax=tax+0.05*(income-250000);
  }
  if(income>=500000 && income<=1000000){
    tax=tax+0.20*(income-250000);
  }
  if(income>=1000000){
    tax=tax+0.30*(income-250000);
  }
  printf("Your net in come tax to be paid  by 23th of month is %d\n", tax);
  return 0;
}