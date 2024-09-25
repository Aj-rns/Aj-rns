#include<stdio.h>
int sub(int, int);

int main (){
  int x, y;
  printf("enter the 1 number : ");
  scanf("%d",&x);
  printf("enter the 2 number : ");
  scanf("%d",&y);
  int subtraction = sub(x, y);
  printf("the subtraction of two to number is : %d",subtraction);
  return 0;

}
int sub(int first, int second){
  int subtraction = first-second;
  return subtraction;

}
