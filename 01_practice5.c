#include<stdio.h>

int main(){
  int principal=500000,rate=7,years=5;
  int simpleInterest=(principal*rate*years)/100;
  printf("The value of simple Interest is %d", simpleInterest);
  return 0;
}