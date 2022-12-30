#include<bits/stdc++.h>
using namespace std;

class Student{
      public:
    string name;
    int id;
    int age;
  
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

    bool operator < (Student s){
        return id<s.id;
    }
};

// bool comp(Student a, Student b){
//     return a.id<b.id;
// }

int main(){
 vector<Student>s;


    for(int i = 0; i<10; i++){
        s.push_back(Student("A", 20-i, 20));
    }

    for(int i = 0; i<10; i++){
        s[i].getData();
    }
    cout<<"After sorting\n";
    // sort(s.begin(),s.end(), comp);  
    sort(s.begin(), s.end());

     for(int i = 0; i<10; i++){
        s[i].getData();
    }  

    return 0;
}