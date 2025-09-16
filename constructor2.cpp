#include<iostream>
using namespace std;
class Car{
    string brand;
    string model;
    int year;
    Car (string x,string y,int z){
        brand = x;
        model = y;
        year = z;
    }
};
int main(){
    car carObj1("BMW","X5",1999);


cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<" "<<endl;
return 0;
}