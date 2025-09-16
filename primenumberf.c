#include<stdio.h>
void prime(int n){
int flag = 1;
   
    if(n<2) 
    flag = 0;
    else{
        for(int i=2; i<n/2; i++){
            if(n%i==0){
            flag = 0;
            }else{
                flag = 1;
            }
        }
    }
    if(flag){
    printf("it's a prime");
    }
    else{
    printf("not prime");
    }
}
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    prime(n);
}
