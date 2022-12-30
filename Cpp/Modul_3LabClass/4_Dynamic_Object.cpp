#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int id;
    int age;
    Student(string name, int id, int age){
        this->name = name;
        this->id = id;
        this->age = age;
    }

    void getStudent(){
        cout<<name<< " "<<id<<" "<<age<<" \n";
    }
};

int main(){
    Student *s = new Student("MSI", 73, 23);

    s->getStudent();

    return 0;

}