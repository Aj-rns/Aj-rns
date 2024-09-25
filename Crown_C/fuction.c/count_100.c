#include<stdio.h>
void count();
int main(){
  count();
  return 0;
}
void count(){
  for( int i=1; i<=100; i++){
    printf("%d  ",i);
  }
  return 0;
}