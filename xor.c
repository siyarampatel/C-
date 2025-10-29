//finding unique no. using xor^ operator
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }
//     int xor=0;
//     for(int i=0; i<n; i++){
//         xor=xor^a[i];
//     }
//     printf("%d",xor);
// }

//swapping two numbers using xor

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter a");
//     scanf("%d",&a);
//     printf("Enter b");
//     scanf("%d",&b);
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("a is %d and b is %d:",a,b);
// }

            // finding missing number in series

// #include<stdio.h>
// int main(){
//     int a[4]={1,2,4,5};
//     int xor1=0;
//     int xor2=0;
//     for(int i=1; i<=5; i++){
//         xor1=xor^i;
//     }
//     for(int i=0; i<4; i++){
//         xor2=xor^a[i];
//     }
//     printf("%d",xor1^xor2);
// }