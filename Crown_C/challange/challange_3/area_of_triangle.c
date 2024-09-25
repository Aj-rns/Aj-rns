#include<stdio.h>
int main(){
  int a, b, area;
  printf("PLEASE ENTER VALUE OF BASE OF TRIANGLE :  ");
  scanf("%d",&a);
  printf("PLEASE ENTER VALUE OF HEIGHT OF TRIANGLE : ");
  scanf("%d",&b);
  area=0.5*a*b;
  printf("AREA OF TRIANGLE IS :  %d ",area);
  return 0;
}