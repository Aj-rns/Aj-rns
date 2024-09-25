#include<stdio.h>
int main(){
  int a, b, sum;
  printf("ENTER YOUR FIRST NUMBER: ");
  scanf("%d", &a);
  printf("ENTER YOUR SECOND NUMBER: ");
  scanf("%d", &b);

  sum=a+b;
  printf("THE SUM OF %d AND %d IS : %d ",a, b, sum);
  return 0;
}