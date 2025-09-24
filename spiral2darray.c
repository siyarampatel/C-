// #include<stdio.h>
// int main(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0; i<=2; i++){
//         for(int j=0; j<=2; j++){
//             if(i==0||j==0||i==2||j==2)
//             printf("%d ",a[i][j]);
//         }
//     }
//     printf("%d",a[1][1]);
// }
#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int l=0,r=2;
   int t=0 ,b=2;
   while(t<=b&&l<=r){
    for(int i=l; i<=r; i++){
        printf("%d ",a[t][i]);
    }
    t++;
    for(int i=t; i<=b; i++){
        printf("%d ",a[i][r]);
    }
    r--;
    for(int i=r; i>=l; i--){
        printf("%d ",a[b][i]);
    }
    b--;
    for(int i=b; i>=t;i--){
        printf("%d ",a[i][l]);
    }
    l++;
   }
    return 0;
}