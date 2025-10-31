// #include<stdio.h>
// void sum(int a){
//     if(a==0){
//         return;
//     }
//     printf("%d",a);
//     sum(a-1);
    
// }
// int main(){
//     sum(3);
// }

//sum of n numbers 


// #include<stdio.h>
// int sum(int a){
//     if(a==0){
//     return 0;
//     }
// return a+sum(a-1);
// }
// int main(){
//     int b = sum(5);
//     printf("The sum is: %d",b);
// }


                    //Factorial 



// #include<stdio.h>
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int a = factorial(n);
//     printf("The factorial is: %d",a);
// }

//Calculate the power of two(2)

// #include<stdio.h>
// int power(int n){
//     if(n==1){
//         return 2;
//     }
//     return 2*power(n-1);
// }
// int main(){
//     int n;
//     printf("Enter n for raise to the power 2: ");
//     scanf("%d",&n);
//     int a = power(n);
//     printf("The power of 2 to the power n: %d",a);
// }

//Sum 0f array through recursion

// #include<stdio.h>
// int sum(int arr[],int n){
//     if(n==0){
//         return 0;
//     }
//     return arr[n-1]+sum(arr,n-1);
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int a=sum( arr,n);
//     printf("%d",a);
// }