#include<stdio.h>
void main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
      for(int j=0; j<=i; j++)  {
        printf("*");
     }
      for(int k=n; k>i; k--){
        printf(" ");
      }
      for(int l=n; l>i; l--){
        printf(" ");
      }
      for(int m=0; m<=i; m++){
        printf("*");
      }
      printf("\n");
    }

}