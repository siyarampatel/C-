 #include<stdio.h>
// void main(){
//     int a[]= {4,7,4,9,0,3,2,5,7,3,8,4,6};
//     int n = sizeof(a)/sizeof(a[0]);
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(a[i]>a[j]){
//                 int t = a[j];
//                 a[j]=a[i];                      //Bubble sort 
//                 a[i]=t;
//           }
//         }
//     }
//     for(int i=0; i<n; i++){
//     printf("%d  ",a[i]);
//     }
// }


//Binary Search
int Binarysearch(){
int a []={1,2,3,4,5,6,7,8};
    int start = 0;
    int end = 7;
   
    int target = 2;
    while(start<=end){
         int mid= (start+end)/2;
        if(target<a[mid]){
            end=mid-1;
        }else if(target>a[mid]){
            start=mid+1;
        }else{
            return mid;
        }
    }
}
int main(){
   int a =  Binarysearch();
   printf("%d",a);
   
}