// #include<stdio.h>
// int main(){
//     int a[]={5,4,0,2,0,12};
//     int b[10];
//     int n=7;
//     int i=0;
//     while(i<n){
//         if(a[i]>0){
//             int t = a[i];
//             b[i]=a[i];

//         }
//          i++;
//     }
   
//     while(i<n){
//         if(a[i]=0){
//             a[i]=b[i];
//         }
//         i++;
//     }
    

//     for(int i=0; i<n; i++){
//         printf("%d",b[i]);
//     }
// }


#include<stdio.h>
int main(){
    int a[]={5,4,0,2,0,12};
    int b[10];
    int n=7;
    int j=0;
    for(int i=0; i<7; i++){
        if(a[i]!=0){
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    for(int i=0; i<7; i++){
        printf("%d",a[i]);
    }
}