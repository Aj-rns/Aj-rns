#include<stdio.h>
int main(){
  int a;
  float b;
  char c;
  double d;
  printf("%lu\n",sizeof(a));// lu is long unsinged int(%lu) we use the %lu format specifer to print the result, instend of %d.
  printf("%lu\n",sizeof(b));
  printf("%lu\n",sizeof(c));
  printf("%lu\n",sizeof(d));
  return 0;
}