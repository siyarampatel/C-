#include<stdio.h>
void main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%2==0){
        printf("n is even");
    
    }
    else if(n%2!=0)
    printf("n is odd");
    else
    printf("zero");
}