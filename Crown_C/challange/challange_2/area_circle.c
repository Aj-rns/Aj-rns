#include <stdio.h>
int main(){
  int r;
  const float PI =3.14;
  float area;
  printf("ENTER THE RADIUS : ");
  scanf("%d",&r);
  area=(float)PI*r*r;
  printf("THE AREA OF CIRCLE OF RADIUS OF %d IS : %f ",r, area);
  return 0;
}