#include<stdio.h>
int main(){
  int age;
  char is_indian;
  
  printf("PLEASE ENTER YOUR AGE : ");
  scanf("%d",&age);
  printf("PLEASE ENTER YOU ARE INDIAN OR NOT [Y/N] : ");
  scanf(" %c",&is_indian);
  
  if(is_indian=='Y'){
    if(age>=18){
      printf("YOU ARE ELIBIBLE FOR LICENSE!!\n");
      printf("YOUR AGE IS : %d ",age);
    }else if(age>70){
      printf("YOU ARE SENIOR, YOU ARE NOT ALLOW TO APPLY ANYMORE!!\n");
      printf("YOUR AGE IS : %d ",age);
    }else{
      printf("YOU ARE NOT ELIGIBLE FOR LICENSE!!\n");
      printf("YOUR AGE IS : %d ",age);
    }
  }else{
    printf("YOU ARE NOT THE CITIZEN OF INDIA!!\n");
  }

 
  return 0;
}
