// static implementation using dynamic array 
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int array_cap;
    int stack_size;

    Stack(){
        arr = new int[1];
        array_cap = 1;
        stack_size = 0;
    }

    // Makes the array capacity multiplied by 2 -> O(long n)
    void increase(){
        int *temp;
        temp = new int[array_cap*2];
        for(int i = 0; i<array_cap; i++){
            temp[i] = arr[i];
        }
        delete []temp;
        array_cap = array_cap*2;
    }

    void push(int value){
        if(stack_size>array_cap){
            increase();
        }
        stack_size = stack_size + 1;
        arr[stack_size-1] = value;
    }

    void pop(){
        if(stack_size==0){
            cout<<"Stack is empty !\n";
            return;
        }
        stack_size = stack_size - 1;
    }

    int top(){
        if(stack_size==0){
            cout<<"Stack is empty !\n";
            return - 1;
        }
        return arr[stack_size-1];
    }
};

int main(){
    Stack s;
    s.push(5);
    cout<<s.top()<<"\n";
     s.push(6);
    cout<<s.top()<<"\n";
     s.push(7);
    cout<<s.top()<<"\n";
     s.push(8);
    cout<<s.top()<<"\n";

    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
   
}