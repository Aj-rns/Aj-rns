#include<stdio.h>
int main(){
  int age;
  char is_indian;
  printf("PLEASE ENTER YOUR AGE : ");
  scanf("%d",&age);
  printf("PLEASE ENTER YOU ARE INDIAN OR NOT [Y/N] : ");
  scanf(" %c",&is_indian);
  if (is_indian=='Y'|| age>=18 && age<70){// logical gate or used in when two condition to check if one condition is true then all are true and both condition are dalse then all conditions are fale,
    printf("you are  eligible!!");
  }else{
    printf("you are not eligible!!");
  }
  
  return 0;
}
