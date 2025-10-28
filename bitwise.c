#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n&1){            //It will perform and operation with n and 1 or binary of 1 then if 1 comes in output then it will be considered 
        printf("ODD");  //as true otherwise false,0 and 1 will appear 
    }else{
        printf("EVEN");         
    }
}