// // #include<stdio.h>
// // #include<stdlib.h>
// // int main(){
// //     int n;
// //     printf("Enter size:");
// //     scanf("%d",&n);
// //     int *arr = (int *)malloc(n*sizeof(int));
// //     printf("Enter %d elements:\n",n);
// //     for(int i=0; i<n; i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     for(int i=0; i<n; i++){
// //         printf("%d ",arr[i]); 
// //     }
// //     free(arr);
// // }

// //Rearrange of elements 

// // #include<stdio.h>
// // #include<stdlib.h>
// // int main(){
// //     int n;
// //     printf("Enter size:");
// //     scanf("%d",&n);
// //     int *arr = (int *)malloc(n*sizeof(int));
// //     printf("Enter %d elements:\n",n);
// //     for(int i=0; i<n; i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     for(int i=0; i<n; i++){
// //         for(int j=i+1; j<n; j++){
// //         if(arr[i]>arr[j]){
// //             int t= arr[i];
// //             arr[i]=arr[j];
// //             arr[j]=t;
// //         }
// //     }
// //     }
// //         for(int i=0; i<n; i++){
// //         printf("%d ",arr[i]); 
// //     }
    
// // }

// // #include<stdio.h>
// // #include<stdlib.h>
// // int main(){
// //     int n;
// //     printf("Enter size:");
// //     scanf("%d",&n);
// //     int *arr = (int *)malloc(n*sizeof(int));
// //     printf("Enter %d elements:\n",n);
// //     for(int i=0; i<n; i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     int j=0;
// //     for(int i=0; i<n; i++){
// //         if(arr[i]==0){
// //             arr[j]=arr[i];
// //         }
// //         j++;
// //     }
  
// //     for(int i=0; i<n; i++){
// //         if(arr[i]<0){
// //             arr[j]=arr[i];
// //         }
// //         j++;
// //     }
    
// //     for(int i=0; i<n; i++){
// //         if(arr[i]>0){
// //             arr[j]=arr[i];
// //         }
// //         j++;
// //     }
// //        for(int i=0; i<n; i++){
// //          printf("%d ",arr[i]); 
// //         }

// // }

// // reloc 

// // int main(){
// //     int n;
// //     printf("Enter size:");
// //     scanf("%d",&n);
// //     int *arr = (int *)malloc(n*sizeof(int));
// //     printf("Enter %d elements:\n",n);
// //     for(int i=0; i<n; i++){
// //         scanf("%d",&arr[i]);
// //     }
// //         for(int i=0; i<n; i++){
// //         printf("%d",arr[i]);
// //     }

// //     printf("\nNow enter new size");
// //     int newSize;
// //     scanf("%d",&newSize);

// //     arr = (int *)realloc(arr,newSize*sizeof(int));
// //     printf("Enter %d new elements:\n");
// //     for(int i=0; i<newSize; i++)
// //     scanf("%d",&arr[i]);

// //     for(int i=0; i<n; i++){
// //         printf("%d",arr[i]);
// //     }
// // }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("Enter size:");
//     scanf("%d",&n);
//     int *arr = (int *)calloc(n,sizeof(int));
//     printf("Enter %d elements:\n",n);
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]); 
//     }
//     free(arr);
// }