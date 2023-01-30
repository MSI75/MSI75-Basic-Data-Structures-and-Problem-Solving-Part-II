#include<bits/stdc++.h>
using namespace std;

template<class T>

class Stack{
    T *arr;
    int stack_size;
    int cap_arr;
    public:
    Stack(){
        arr = new T[1];
        stack_size = 0;
        cap_arr = 1;
    }

    void increase(){
        T *temp;
        temp = new T[cap_arr*2];
        for(int i = 0; i<cap_arr; i++){
            temp[i]=arr[i];
        }
        delete []temp;
        cap_arr = cap_arr*2;
    }

    void push(T value){
        if(stack_size>cap_arr){
            increase();
        }
        stack_size = stack_size+1;
        arr[stack_size-1] = value;
    }

    void pop(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            return;
        }
        stack_size = stack_size - 1;
    }

    T top(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            // assert(false);
            // T a;
            return -1;
        }
        return arr[stack_size-1];
    }

};

int main(){
    Stack<int>st;
    st.push(4);
    st.push(5);
    st.push(7);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    
    Stack<char>st1;
    st1.push('a');
    st1.push('b');
    st1.push('c');
    cout<<st1.top()<<"\n";
    st1.pop();
    cout<<st1.top()<<"\n";
    st1.pop();
    cout<<st1.top()<<"\n";
}