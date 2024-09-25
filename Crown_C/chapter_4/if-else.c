#include<stdio.h>
int main (){
  int age;
  printf("PLEASE ENTER YOUR AGE : ");
  scanf("%d",&age);
  if(age>=18){
    printf("YOUR ARE ELIGIBLE FOR LICENSE!!!\n");

  } else{
    printf("YOU ARE NO NOT ELIGIBLE FOR LICENSE!!\n");
  }
  printf("YOUR ARE JUST %d YEAR OLD",age);
  return 0;
}