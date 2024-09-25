#include<stdio.h>
int main (){
  int a,b;
  printf("ENTER FIRST NUMBER : ");
  scanf("%d",&a);
  printf("ENTER THE SECOND NUMBER : ");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n\nAFTER SWAPPING FIRST NUMBER : %d\n",a);
  printf("AFTER SWAPPING SECOND NUMBER : %d",b);
  return 0;
}