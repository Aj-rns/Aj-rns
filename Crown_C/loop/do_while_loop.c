#include<stdio.h>
int main(){
  int num;
  do{
    printf("PLEASE ENTER THE NUMBER : ");
    scanf("%d",&num);
  }while(num!=10);
    
  printf("YOU GUESS THE CORRECT ANSWER : ");
  return 0;
}