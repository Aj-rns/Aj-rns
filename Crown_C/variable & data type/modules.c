#include<stdio.h>
int main(){
  int a, b, c;
  printf("PLEASE ENTER YOUR FIRST NUMBER : ");
  scanf("%d",&a);
  printf("PLEASE ENTER YOUR SECOND NUMBER : ");
  scanf("%d",&b);

  c=a%b;
  printf("REMENDER OF %d BY %d IS : %d ",a, b, c);
  return 0;
}