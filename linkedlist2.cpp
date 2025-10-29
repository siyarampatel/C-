// #include<iostream>
// using namespace std;

// struct node {
//     int data;
//     node *next;
//     node *prev;
// };

// node *first = NULL, *temp, *ttemp;

// void create_first() {
//     first = new node;
//     cin >> first->data;
//     first->next = NULL;
//     first->prev = NULL;
// }

// void Add_Node() {
//     temp = first;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     ttemp = new node;
//     cin >> ttemp->data;
//     temp->next = ttemp;
//     ttemp->prev = temp;
//     ttemp->next = NULL;
// }

// void add_after(int x) {
//     temp = first;
//     while (temp != NULL && temp->data != x) {
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         cout << "Node not found!" << endl;
//         return;
//     }

//     ttemp = new node;
//     cin >> ttemp->data;

//     ttemp->next = temp->next;
//     ttemp->prev = temp;
//     if (temp->next != NULL)
//         temp->next->prev = ttemp;
//     temp->next = ttemp;
// }
// void del_before(int x){
//     temp=first;
//     while(temp->data!=x){
//         temp=temp->next;
//         ttemp=temp->prev;
//         p=ttemp->prev;
//         p->next=temp;
//         temp->prev=p;
//         ttemp->next=ttemp->prev=NULL;
//         delete ttemp;
//     }
    
// }

// void display() {
//     temp = first;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     create_first();
//     Add_Node();
//     Add_Node();
//     del_before(30);
//     display();
//   //  add_after(20);
    
//     return 0;
// }


//swapping second last and last in doubly linked list
void swap(){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
        ttemp=temp->prev;
        p=ttemp->prev;
        p->next=temp;
        temp->prev=p;
        temp->next=ttemp;
        ttemp->prev=temp;
        ttemp->next=NULL;
    }
}

//creation of the polynomial list perform mulitipication and addition 