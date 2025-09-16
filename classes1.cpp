#include<iostream>
class MyClass{  
    public:
    void myMethod();
};
void MyClass::myMethod(){
   std:: cout<<"Hello Ji";
}
int main(){
MyClass myObj;
myObj.myMethod();
return 0;
}