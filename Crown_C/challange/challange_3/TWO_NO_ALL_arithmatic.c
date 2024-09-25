#include<stdio.h>
float main(){
  float a, b, add, sub, multi, div;
  int rem;
 
  printf("PLEASE ENTER YOUR FIRST NUMBER : ");
  scanf("%f",&a);
  printf("PLEASE ENTER YOUR SECOND NUMBER : ");
  scanf("%f",&b);
  add=a+b;
  printf("ADDITION OF TWO NUMBER IS : %f \n",add);
  sub=a-b;
  printf("SUBTRACTON OF TWO NUMBER IS : %f \n",sub);
  multi=a*b;
  printf("MULTIPLICATION OF TWO NUMBER IS : %f \n",multi);
  div=a/b;
  printf("divition of two number is : %f \n",div);
  rem=(int)a%(int)b;
  printf("REMENDER OF TWO NUMBER IS : %d \n",rem);
  return 0;
}