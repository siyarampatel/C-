//101 -> 1010 left shift (will give double of the number we have shifted)
//101 -> 010  right shift (will give half of the number we have shifted)

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("\nAfter left shift:%d",a<<1);
    printf("\nAfter right shift:%d",a>>1);
    
}
