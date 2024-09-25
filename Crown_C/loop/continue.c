#include<stdio.h>
int main(){

  for(int i = 1; i<=100; i++){
    if(i%2==1){
      continue;// it use in escape below line commands..
    }
    printf("%d\n",i);
  }
return 0;
}