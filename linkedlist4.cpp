//delete last node in singly circular linked list
// void del_last(){
//     temp=first;
//     while(temp->next!=first){
//         ttemp=temp;
//         temp=temp->next;
//         ttemp->next=first;
//         temp->next=NULL;
//         delete temp;
//     }
// }
// void swapFL(){
//     temp=first;
//     p=first->next;
//     while(temp->next!=first){
//         ttemp=temp;
//         temp=temp->next;
//     }
//     ttemp->next=first;
//     first->next=temp;
//     temp->next=p;
//     first=temp;
// }

// void swapFS(){
//     temp=first->next;
//     ttemp=temp->next;
//     p=first;
//     while(p->next!=first){
//         p=p->next;
//         temp->next=first;
//         first->next=ttemp;
//         p->next=temp;
//         first=temp;
//     }
//}

//  void swapLandSl(){
//     temp=first->next;
//     ttemp=temp->next;
//     p=last;
//     while(p->next!=last){
//         p=p->next;
//         temp->next=last;
//         last->next=ttemp;
//         p->nexttemp;
//         last=temp;
//     }
//  }
