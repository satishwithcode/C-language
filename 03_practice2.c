#include<stdio.h>

int main(){
  int math,physics,chemisty;
  int total;
  printf("Enter math Marks\n");
  scanf("%d", &math);

  printf("Enter math physics\n");
  scanf("%d", &physics);

  printf("Enter math chemisty\n");
  scanf("%d", &chemisty);
  total = (chemisty + physics + math)/3;

  if((total<40) ||chemisty<33 ||physics<33 ||math<33)
  {
    printf("Your total percentage is %f and you are fail\n",total);
  }
  else
  {
    printf("Your total percentage is %f and you are pass\n",total);
  }
  return 0;
}