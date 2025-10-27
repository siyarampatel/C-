#include<stdio.h>
#include<conio.h>
// int main(){
// int arr[]={1,2,3,4,5};
// for(int i=0; i<=4; i++){
//     printf("%d",arr[i]);
// }
// }

// int main(){
//     int arr[]={1,2,3,4,5},sum=0;
//     for(int i=0; i<5;i++){
//         sum+=arr[i];
//     }
//     printf("%d",sum);
// }

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int max=arr[0];
//     for(int i=0; i<7; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
// }


// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int min=arr[0];
//     for(int i=0; i<8; i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     printf("%d",min);
// }

// int main(){
//     int arr []= {1,4,3,6,2,7,4,6};

    
//     for(int i=0; i<9; i++){
//        if(arr[i]==2){
//         printf("true and the index is %d",i);
//         break;           
//        }
//     }
// }

// int main(){
//     int arr []= {1,4,3,6,2,7,4,6};
//     int even=0,odd=0;
    
//     for(int i=0; i<9; i++){
//      if(arr[i]%2==0){
//         even++;
//      }else{
//         odd++;
//      }
// }
// printf("no of even is %d and odd is %d",even,odd);
// }


// int main(){
//     int arr[]={1,2,3,5,6};
//     int sum=0,sum1=0,missing=0;
//     for(int i=0; i<5; i++){
//     sum+=arr[i];
//     }
//     for(int i=1; i<7; i++){
//         sum1 +=i;
//     }
//         missing=sum1-sum;
//         printf("%d",missing);
//}
// int main(){
//     int arr[]={1,2,3,4,5,5,6,3};
//     int k=3;
//     for(int i=0; i<9; i++){
//         for(int j=0; j<9; j++){
//             if(arr[i]+arr[j]==k){
//                 printf("%d,%d\n",i,j);
//                 break;
//             }
//         }
//     }
// }
//palindrome
// int main(){
//     int a[]={1,2,2,1};
//     int check = 1;
//     int n = sizeof(a) / sizeof(a[0]);
//     for(int i=0; i<n/2; i++){
//         if(a[i]!=a[n-1+i]){
//            check =0;
//             break;
//         }else{
//             check=1;
//         }
//         if(check){
//             printf("it's an palindrome");
//         }else{
//             printf("not an palindrome");
//         }
//     }
// }
// int main(){
//     int a[]={1,2,2,1};
//     int check = 0;
//     int n = sizeof(a) / sizeof(a[0]);
//     for(int i=0; i<n/2; i++){
//         if(a[i]==a[n-1+i]){
//            check =1;
//             break;
//         }else{
//             check=0;
//         }
//         if(check){
//             printf("it's an palindrome");
//         }else{
//             printf("not an palindrome");
//         }
//     }
// }

// int main(){
//     int a []= {10,20,30,40,50};
//     int n = sizeof(a) / sizeof(a[0]);
//     int first = a[0];
//     for(int i=0; i<n; i++){
//         a[i]=a[i+1];
//     }
//     a[n-1]=first;
//     for(int i=0; i<n; i++){
//         printf("%d ",a[i]);
//     }
// }

// int main(){
//     int a[]={1,5,3,6,7,7,3,4,5,9,3,2,5,6,4};
//     int n = sizeof(a) / sizeof(a[0]);
//     int g = 3;
//     int f = 0;
//     for(int i=0; i<n; i++) {
//        if(a[i]==g){
//         f++;
//        }
//     }
//     printf("%d",f);
// }


// int main(){
//     int a[][] = {(1,2,3),(2,4,3),(6,4,5)};
//     //int n = sizeof(a) / sizeof(a[0]);
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             printf("%d",a[i][j]);
//         }
//     }
// }

// int main(){
//     // int max=0;
//     int a[]={1,5,3,6,7,7,3,4,5,9,3,2,5,6,4};
//      int n = sizeof(a) / sizeof(a[0]);
//     int k;
//     int max = 0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//            k =  a[i]+a[j];                        
//             if(k>max){
//                 max=k; 
              
//             }
//             }
//         }
//         printf("%d",max);
// }
 