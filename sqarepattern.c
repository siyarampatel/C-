#include<stdio.h>
void main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1||i==n||j==n||j==1)
            printf("*");
         else  
            printf(" ");
        }
        printf("\n");
    }
}