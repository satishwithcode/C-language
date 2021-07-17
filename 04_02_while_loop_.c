#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  //while (a < 10)
  
    //a=11;
   //---> This will two lines will lead to an infinite loop
    while(a<10){
      
    printf("%d\n", a);
    a++;
  }
  return 0;
}