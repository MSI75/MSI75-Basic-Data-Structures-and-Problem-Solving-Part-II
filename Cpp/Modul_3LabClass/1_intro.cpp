#include<bits/stdc++.h>
using namespace std;

class Stuedent{
    public:
    string name;
    int student_id;
    string fathers_name;
    string mothers_name;

    void printInformation(){
        cout<<name<<" "<<student_id<<" "<<fathers_name<<" "<<mothers_name<<" \n";
    }
};

class Ractangle{
    public:
    int height, widh;
    
    Stuedent s;

    int triangle(){
        return height * widh;
    }

    int ractangle(){
        return (height*widh)/2;
    }

};

// Recursive class

class Person{
    public:
    string name;
    Person *father, *mother;

    void print_info(){
        cout<<"Name = "<<name<<"\n";
        cout<<"Fathers name = "<<father->name<<"\n";
        cout<<"Mothers name = "<<mother->name<<"\n";
    }
};

int main(){
    Person m;
    m.father = new Person;
    m.mother = new Person;
    m.name = "MSI";
    m.father->name = "MY";
    m.mother->name = "HB";

    m.print_info();

    // Ractangle r, r1;
    // r.height = 7;
    // r.widh = 2;
    // cout<<r.ractangle()<<"\n";
    // cout<<r.triangle()<<"\n";

    // r1.height = 17;
    // r1.widh = 2;
    // cout<<r1.ractangle()<<"\n";
    // cout<<r1.triangle()<<"\n";

    // r.s.name = "MSI";
    // r.s.printInformation();



    // Stuedent s, s1;
    // s.name = "MSI";
    // s.student_id = 73;
    // s.fathers_name = "MY";
    // s.mothers_name = "HB";
    // s.printInformation();

    // s1.name = "MSI_75";
    // s1.student_id = 73;
    // s1.fathers_name = "MY";
    // s1.mothers_name = "HB";
    // s1.printInformation();
}