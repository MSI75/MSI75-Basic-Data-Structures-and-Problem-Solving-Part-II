#include<bits/stdc++.h>
using namespace std;


class User{
    protected:
    string name;
    int id;
};

class Admin : User{
    private:
    string dasignation;

    public:
    void setIN(string s, int i, string dg){
        name = s;
        id = i;
        dasignation = dg;
    }

    void getData(){
        cout<<name<<" "<<id<<" "<<dasignation<<"\n";
    }
};

int main(){
    Admin a;
    a.setIN("MSI", 73, "M.D");
    a.getData();
}