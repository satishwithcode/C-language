#include<stdio.h>

int main(){
  int i=0;
  int n;
  printf("Enter the value of n %d\n");
  scanf("%d",&n);
  do{
    printf("the number is %d\n", i+1);
    i++;
  }while("i<n");
  return 0;
}