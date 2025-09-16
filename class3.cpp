#include<iostream>
void test::show(int val){
    cout<<"\nValue is "<<val;
}
int main(){
test t1,a2;
t1.value=9;
a2.value=7;
t1.show(9);
a2.show(2);
return 0;
}