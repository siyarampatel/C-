#include<stdio.h>
void main(){
    int n;
    float amount,converted;
    printf("enter choice:\n");
    printf("1.rupees to yen\n 2.rupees to dollar\n");
    scanf("%d",&n);
    printf("enter amount: ");
    scanf("%d",&amount);

    switch(n){
        case 1: printf("%d rupees is equal to %d yen",amount,(float)amount*1.67);
        break;
        case 2: printf("%d rupees is equal to %d dollar",amount,(float)amount*(1/87));
    }

}