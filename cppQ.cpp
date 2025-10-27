#include<iostream>
#include<string>

using namespace std;
class person{
    string name;
    int age;
    int salary;
    public:
    person(){
        name = "Amit";
        age = 25;
        salary = 2500;
    }
    void new_salary(int n){
        salary = n;
    }
    void new_age(int ag){
        age = ag;
    }
    void display(){
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is:"<<age<<endl;
        cout<<"Salary is: "<<salary<<endl;
        
    }
};


int main(){
    person p1;
    int sal;
    int ag;
    cout<<"Enter new salary: ";
    cin>>sal;
    cout<<"Enter new age: ";
    cin>>ag;
    p1.new_salary(sal);
    p1.new_age(ag);
    cout<<"Updated:";
    p1.display();
    
}