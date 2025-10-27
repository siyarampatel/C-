#include<stdio.h>
void main(){
    char ch;
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("choose + for addition\nchoose - for sustraction \n choose * for multipication\nchoose / for division\n ");
    scanf(" %c",&ch);
    switch(ch){
        case '+': printf("sum=%d",a+b);
        break;
        case '-': printf("sub=%d",a-b);
        break;
        case '*': printf("mul=%d",a*b);
        break;
        case '/': printf("div=%d",a/b);
        break;
        default: printf("invalid choice");
        break;


        
    }
}