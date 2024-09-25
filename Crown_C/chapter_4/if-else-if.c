#include<stdio.h>
int main (){
  int age;
  printf("PLEASE ENTER YOUR AGE : ");
  scanf("%d",&age);
  if(age>=18){
    printf("YOUR ARE ELIGIBALE FOR LICENSE!!!\n");

  }else if(age>70){
    printf("YOU ARE SENIOR, YOU ARE NOT APPLY ANYMORE\n");
  }else{
    printf("YOU ARE NOT ELIBIALE FOR A LICENSE.\n");
  }
  printf("YOUR ARE JUST %d YEAR OLD",age);
  return 0;
}