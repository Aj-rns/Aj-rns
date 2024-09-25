#include<stdio.h>
float main (){
  float P, R, T, comp;
  printf("PLEASE ENTER THE VALUE OF PRINCIPLE : ");
  scanf("%f",&P);
  printf("PLEASE ENTER THE VALUE OF RATE { in percentage } : ");
  scanf("%f",&R);
  printf("PLEASE ENTER THE VALUE OF TIME { in year } : ");
  scanf("%f",&T);
  comp=P*(1+R/100)*T;
  printf("THE COMPOUND INTREST IS : %f",comp);
  return 0;
}