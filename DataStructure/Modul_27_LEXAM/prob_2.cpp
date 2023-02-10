#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node{
   public:
   T data;
   Node *next;
};

template<class T>
class Stack{
   Node<T> *head;
   int sz;
   Node<T> *createNewNode(T value){
       Node<T> *node = new Node<T>;
       node->data = value;
       node->next = NULL;
       return node;
   }

   public:
   Stack(){
       head = NULL;
       sz = 0;
   }

   void push(T value){
       Node<T> *newNode = createNewNode(value);
       if(sz==0){
           head = newNode;
           sz++;
           return;
       }
       newNode->next = head;
       head = newNode;
       sz++;
   }

   void pop(){
       if(sz==0){
           cout<<"Stack is empty!\n";
           return;
       }
       Node<T> *a = head;
       head = a->next;
       delete a;
       sz--;
   }

   T top(){
       if(sz==0){
           cout<<"Stack is empty!\n";
           T a;
           return a;
       }
       return head->data;
   }

};

int main(){
   Stack<char>st;
   st.push('a');
   st.push('b');
   st.push('c');
   cout<<st.top()<<"\n";
   st.pop();
   cout<<st.top()<<"\n";
   st.pop();
   cout<<st.top()<<"\n";
   st.pop();
   cout<<st.top()<<"\n";
}
