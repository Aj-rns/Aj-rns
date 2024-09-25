#include<stdio.h>
int main(){
  int day;
  printf("PLEASE ENTER DAY NUMBER BETWEEN (1-7): ");
  scanf("%d",&day);

  switch(day){/*1 float case not used
  2 multiple cases cannot use same expressions
  3 switch cases might be faster for many cases due to compiler optimizations*/
    case 1 : 
     printf("TODAY IS MONDAY ");
     break;
    case 2 :
     printf("TODAY IS TUESDAY");
     break;
    case 3 :
     printf("TODAY IS WEDNESDAY");
     break;
    case 4 :
     printf("TODAY IS THURSDAY");
     break;
    case 5 :
     printf("TODAY IS FRIDAY");
     break;
    case 6 :
     printf("TODAY IS SATURDAY");
     break;
    case 7 :
     printf("TODAY IS SUNDAY");
     break;

    default:
    printf("DAY NUMBER IS INCORRECT!!");
  
  }
  printf("\nDAY CALCULATION IS COMPLETED!!");

  return 0;
} 