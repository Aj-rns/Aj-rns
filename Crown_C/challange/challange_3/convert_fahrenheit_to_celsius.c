#include<stdio.h>
float main(){
  float f, cel;
  printf("PLEASE ENTER THE VALUE OF FAHRENHEIT : ");
  scanf("%f",&f);

  cel=(f-32)*5/9;
  printf("the value of celsius{ AFTER CONVERTING F TO C} is : %f ",cel);
  return 0;

}