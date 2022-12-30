#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;

    Person(){
        father = NULL;
        mother = NULL;
    }

    Person *father, *mother;

    Person(string name, string f_name, string m_name){
        this->name = name;
        father = new Person;
        this->father->name = f_name;
        mother = new Person;
        this->mother->name = m_name;
    }

    void get_print(){
        cout<<name<<" "<<father->name<<" "<<mother->name<<"\n";
    }

    ~Person(){
        cout<<"Colled\n";
        if(father!=NULL)
        delete father;

        if(mother!=NULL)
        delete mother;
    }
};

int main(){
    Person p("MSI", "MY", "HB");
    p.get_print();

    return 0;
}