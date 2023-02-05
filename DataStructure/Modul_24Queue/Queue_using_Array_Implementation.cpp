#include<bits/stdc++.h>
using namespace std;
#define MAXE_SIZE 500

class Queue{
    public:
    int arr[MAXE_SIZE];
    int l;
    int r;
    Queue(){
        l = 0;
        r = -1;
    }

    void enqueue(int value){
        if(r+1>=MAXE_SIZE){
            cout<<"Queue is fully!\n";
            return;
        }
        r++;
        arr[r] = value;
    }

    void dequeue(){
        if(l>r){
            cout<<"Queue is empty!\n";
            return;
        }
        l++;
    }

    int front(){
         if(l>r){
            cout<<"Queue is empty!\n";
            return -1;
        }
        return arr[l];
    }

    int getSize(){
        return r-l+1;
    }

};
int main(){
    Queue q;
    q.enqueue(7);
    q.enqueue(6);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);

    cout<<"size : "<<q.getSize()<<"\n";
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<"size : "<<q.getSize()<<"\n";
}