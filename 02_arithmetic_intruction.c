#include <stdio.h>
#include <math.h>

int main()
{
  int a = 4;
  int b = 5, z;
 

  printf("the value of a+b is: %d\n", a + b);
  printf("the value of a-b is: %d\n", a - b);
  printf("the value of a*b is: %d\n", a * b);
  printf("the value of a/b is: %d\n", a / b);

   z = a * b;//legal
  //a*b=z;//illlegal
  printf("the value of z is: %d\n", z);

  printf("5 when divided by 2 leaves a remainder of %d\n",5%2);
  printf("-5 when divided by 2 leaves a remainder of %d\n",-5%2);
  printf("5 when divided by -2 leaves a remainder of %d\n",5%-2);

  // No operator is assumed to be present
  //printf("the value of 4*5 is %d\n",(4)(5)); --> will not return 20/ wrong!!
  printf("the value of 4*5 is %d\n",(4)*(5));

  //there is no operator to perform exponentiation in c
  printf("the value of 4 ^ 5 is %d\n",4^5);//--->will not product 4 to the 5
  printf("the value of 2 to the power 5 is %f\n",pow(2,5));

  printf("the value of 6+5 is %d\n",6+5);
  printf("the value of 6+5.6 is %f\n",6+5.6);
  printf("the value of 6.2+5.6 is %f\n",6.2+5.6);
  printf("the value of 5/2 is %d\n",5/2);
  printf("the value of 3.0/9 is %f\n",3.0/9);
  return 0;
}