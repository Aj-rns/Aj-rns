#include<stdio.h>
int main(){
  //n wala next line me use hoga
  printf("ajay\nkumar\n\n\n");
  //t wala kuch space de deta ha
  printf("ajay\tkumar\n\n\n");
  //b wala words ke uper likh deta ha like- y ko hata ke k lek deya or y gayab hogiya
  printf("ajay\bkumar\n\n");
  // \""\ && \''\ ye wala kisi print me quet laga na hoga tab use hota ha
  printf("\'ajay\'\t\"kumar\"");
}