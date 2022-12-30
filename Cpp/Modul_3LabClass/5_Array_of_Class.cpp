#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int id;
    int age;
    public:
    Student(){

    }

   Student(string nam, int i, int ag){
        name = nam;
        id = i;
        age = ag;
    }

    void getData(){
        cout<<name<<" "<<id<<" "<<age<<"\n";
    }

};

int main(){
    Student s[10];


    for(int i = 1; i<=10; i++){
        s[i]=Student("A", i, 20);
    }

    for(int i = 1; i<=10; i++){
        s[i].getData();
    }

    return 0;
}