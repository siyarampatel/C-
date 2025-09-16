#include<stdio.h>
void main(){
    int fixedammount = 7000;
    int n,withammount,depositeammount;
    int pass = 1234;
    int enterpass;
    printf("enter your password: ");
    scanf("%d",&enterpass);
    if(enterpass==pass){
    printf("enter your choice\n1.Check your blance\n2.Withdraw\n3.Deposite\n");
    scanf("%d",&n);
    
    switch(n){
        case 1: printf("%d",fixedammount);
        break;

        case 2: printf("enter amount to withdraw\n");
        scanf("%d",&withammount);
        if(withammount>fixedammount)
        printf("invalid ammount\n");
        else
        fixedammount-=withammount;
        printf("Balance left = %d",fixedammount);
        break;
        
        case 3: printf("enter ammount to deposite\n");
        scanf("%d",&depositeammount);
        fixedammount+=depositeammount;
        printf("%d",fixedammount);
        default : printf("invalid choice");
    }
}else{
        printf(" retry");
    }
    
}
