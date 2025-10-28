// // Question link => https://leetcode.com/problems/container-with-most-water/description/
// #include<stdio.h>
// int main(){
//     int height[9]={1,8,6,2,5,4,8,3,7};
//     int i=0,j=0;
//     int maxArea = 0;
//     while(i<j){
//         int h;
//         if(height[i]<height[j]){
//             h=height[i];
//         }else{
//             h=height[j];
//         }
//         int w=j-i;
//         int area = h*w;
//         if(area>maxArea){
//             maxArea=area;
//         }
//         if(height[i]<height[j]){
//             i++;
//         }else{
//             j--;
//         }
//     }
//     printf("Maximum area = %d",maxArea);
// }

//Q 121 => 
#include <stdio.h>


int main() {
    int a[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int min = a[0];
    
    int j = 0;  
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            j = i;
        }
    }
    int max = a[j];
    for (int i = j; i < n; i++) {
        if (a[i]>max ) {
            max = a[i];
           
        }
    }
    printf("Profit=%d ",max-min);
    
}
