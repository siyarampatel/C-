#include<stdio.h>
int magic(int n){
    while(n>9){
        int n;
        int sum=0;
        while(n>0){
        int a = n%10;
        sum +=a;
        n = n/10; 
        } 
            n=sum;
    }

   return n==1;
}
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
   
   if (magic(n)){
    printf("it's an magical number");
   }else{
    printf("not an magical number");
   
    }
  return 0;
}