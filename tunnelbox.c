#include<stdio.h>
int main (){
    int n,length,width,height,v;
    printf("Enter the number of boxex");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d%d",&width,&length,&height);
        if(height<=41){
            v=width*length*height;
            printf("%d",v);
        }else{
            printf("invalid input");
        }
    }
    
}