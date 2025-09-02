#include<stdio.h>
void main(){
  int num=826;
  int sum=0;
  while(num>8){
  int a=num%10;
  sum+=a;
  num=num/10;
  }
  printf("%d",sum);
}