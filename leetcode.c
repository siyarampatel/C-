// Question link => https://leetcode.com/problems/container-with-most-water/description/
#include<stdio.h>
int main(){
    int height[9]={1,8,6,2,5,4,8,3,7};
    int i=0,j=0;
    int maxArea = 0;
    while(i<j){
        int h;
        if(height[i]<height[j]){
            h=height[i];
        }else{
            h=height[j];
        }
        int w=j-i;
        int area = h*w;
        if(area>maxArea){
            maxArea=area;
        }
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
    }
    printf("Maximum area = %d",maxArea);

}