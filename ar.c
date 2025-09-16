#include<stdio.h>
int main(){
    int a,m;
printf("enter a\n");
scanf("%d",&a);
printf("enteer m\n");
scanf("%d",&m);
if(a>=75 && m>75){
    printf("A\n");


}else if (a>=75 && m<=75 && m>60){
    printf("B");
}else if (a>=75 && m<=60 && m>50){
    printf("C");

}else if (a>=75 && m<=50){
    printf("D");
}else {
    printf("F");
}
return 0;
}
