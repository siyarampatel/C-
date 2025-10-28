#include<stdio.h>
void isPali(){
    for(int i=0; i<n/2; i++){
        if(a[i]!=a[n-i-1]){
            isPalin=0;
            break;
        }
    }
}
int main(){
    char a[20];
    int isPalin=1;
    printf("Enter your string: ");
    scanf("%s",a);
    int n= strlen(a);
}