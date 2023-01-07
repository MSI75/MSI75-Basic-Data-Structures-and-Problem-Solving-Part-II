#include<bits/stdc++.h>
using namespace std;

// Memory Complexity nlogn
class Array{
    private:
    int *arr;
    int cap;
    int size;

    void Increase_size(){
        cap = cap*2;
        int *temp = new int[cap];

        for(int i = 0; i<size; i++){
            temp[i]=arr[i];
        }
        delete [] arr;
        arr=temp;
    }

    public:
    Array(){
        arr = new int [1];
        cap = 1;
        size = 0;
    }

    void push_back(int x){
        if(cap==size){
            Increase_size();
        }
        arr[size]=x;
        size++;
    }

    void print(){
        for(int i =0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

    void insert(int pos, int x){
        if(cap==size){
            Increase_size();
        }

        for(int i = size-1; i>=pos; i--){
            arr[i+1]=arr[i];
        }

        arr[pos]=x;
        size++;
    }

    int getSize(){
        return size;
    }

    int getElement(int idx){
        if(idx>=size){
            cout<<"Error "<<idx<<" is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }


    void pop_back(){
        if(size==0){
            cout<<"Current size is 0\n";
            return;
        }
        size--;
    }

    void Erase(int pos){
        if(pos>=size){
            cout<<"Position doesn't exit\n";
            return;
        }

        for(int i = pos+1; i<size; i++){
            arr[i-1]=arr[i];
        }
        size--;

    }
};


int main(){
    Array a;
    a.push_back(45);
    a.push_back(75);
    a.push_back(12);
    a.push_back(41);
    a.push_back(95);
    a.print();
    // cout<<a.getSize()<<"\n";

    // cout<<a.getElement(2)<<"\n";

    // a.insert(2,3);

    // a.pop_back();
    // a.print();

    a.Erase(1);
    a.print();
}