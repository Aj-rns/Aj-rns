#include<stdio.h>
int main(){
  int a;
  input_lev://label of goto
  printf("PLEASE ENTER YOUR PASSWORD : ");
  scanf("%d",&a);
  if (a!=10){
    goto input_lev;
  }
printf("CONGRATULATION YOU GUESS THE CORRECT NUMBER");
return 0;
}