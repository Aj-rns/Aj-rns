#include<stdio.h>
// void count_to_100(); // fuction prototype
int sum(int, int);

int main(){
  // count_to_100();
  int add =sum(4, 5);
  printf("the sum is %d",add);
  return 0; // fuction call

}
// void count_to_100(){ // fuction defination
//   for( int i=1; i<=100; i++){
//     printf("%d  ",i);
//   }

// }
int sum(int first, int second){
  int addition = first + second;
  return addition;
}
