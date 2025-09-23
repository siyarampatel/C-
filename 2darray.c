// #include<stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum=0;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//          sum+=arr[i][j];
//         }
//     }

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("the sum of this 2d array is %d",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
         sum+=arr[i][j];
        }
         printf("%d\n",sum);
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
