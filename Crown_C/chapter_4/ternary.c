#include<stdio.h>
int main (){
  char gen;
  printf("PLEASE ENTER YOUR GENDER? [M/F] : ");
  scanf(" %c",&gen);
  gen=='M' ? printf("MALE") : printf("FEMALE");// if=? and :=else hota ha
  return 0;
}