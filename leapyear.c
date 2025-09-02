#include<stdio.h>
void main(){
    int a,b,n;
   // float z;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter your choice: \n1.add\n2.substraction\n3.multiply\n4.division\n");
    scanf("%d",&n);
    if(n==1){
        printf("the sum of a and b is %d",a+b);
    }
    else if(n==2){
        printf("the substraction of a and b is %d",a-b);
    }
    else if(n==3){
        printf("the multipication of a and b is %d",a*b);
    }else if(n==4){
         
        printf("the division of a and b is %.2f",(float)a/b);
    }
    else {
        printf("invalid choice");
    }
}