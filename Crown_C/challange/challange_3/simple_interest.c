#include<stdio.h>
float main(){
  float P, T, R, sim;
  
  printf("PLEASE ENTER THE VALUE OF PRINCIPLE : ");
  scanf("%f",&P);
  printf("PLEASE ENTER THE VALUE OF TIME{ in year } : ");
  scanf("%f",&T);
  printf("PLEASE ENTER THE VALUE OF RATE{ in percent } : ");
  scanf("%f",&R);
  sim=(P*T*R)/100;
  printf("SIMPLE INTEREST IS : %f",sim);
  return 0;


}