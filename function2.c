#include<stdio.h>
int sum (){
    int a = 5;
    int b = 6;
    int c = a+b;
    return c;
}
void main(){
    int a = sum();
    printf("%d",a);
}