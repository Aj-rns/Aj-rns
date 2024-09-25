#include<stdio.h>
int main(){
  double a, b, c;
  printf("ENTER YOUR FIRDT NUMBER : ");
  scanf("%d",&a);
  printf("ENTER YOUR SECOND NUMBER : ");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf(" after swap first no to second no : %d\n",a);
  printf(" after swap second no to first no : %d ",b);
  return 0;
}