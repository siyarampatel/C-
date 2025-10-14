#include<stdio.h>
#include<string.h>
struct address{
    int pincode;
};
struct student{
    char name[20];
    int rollno;
    int age;
    struct address s2;
};
int main(){
    struct student s1;
    strcpy(s1.name ,"siyaram");
    s1.rollno = 325;
    s1.age = 22;
    printf("%s\n",s1.name);
    printf("%d\n",s1.rollno);
    printf("%d\n",s1.age);
    
    s1.s2.pincode = 483119;
    printf("%d",s1.s2.pincode);
}