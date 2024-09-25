#include<stdio.h>
int main(){
  int a, b, c, d, p;
  printf("PLEASE ENTER THE VALUE OF SIDE A : ");
  scanf("%d",&a);
  printf("PLEASE ENTER THE VALUE OF SIDE B : ");
  scanf("%d",&b);
  printf("PLEASE ENTER THE VALUE OF SIDE C : ");
  scanf("%d",&c);
  printf("PLEASE ENTER THE VALUE OF SIDE D : ");
  scanf("%d",&d);

  p=a+b+c+d;
  printf("PERIMETER OF ANY FOUR SIDE OF QUAD IS : %d",p);
  return 0;
}