#include<iostream>
using namespace std;
struct scll{
    int data;
    scll *next;
};
scll *first,*temp,*ttemp;
void create_first(){
    first = new scll;
    cin>>first->data;
    first->next=first;

    void add_node(){
        temp=first;
        while(temp->next!=first){
            temp=temp->next;
        }
            ttemp=new scll;
            cin>>ttemp->data;
            ttemp->next=first;
            temp->next=ttemp;
        
    }
    void addnode_beforefirst(){
        temp=first;
        while(temp->next!=first){
            
        }
    }

    void display(){
        temp=first;
        do{
            cout<<temp->data;
            temp=temp->next;
        }while(temp!=first);
    }
}