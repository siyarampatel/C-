#include<stdio.h>
int evenodd(n){
    if(n%2==0){
        printf("even\n");
    }else{
        printf("odd");
    }
}

void main(){
printf("enter your number: ");
int n;
scanf("%d",&n);
evenodd(n);
}