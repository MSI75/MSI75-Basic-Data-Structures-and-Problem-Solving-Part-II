#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class LinkedList{
    public:
    Node *head;

    LinkedList(){
        head = NULL;
    }

    // create a new node with data = value and next = NULL 
    Node *CreateNewNode(int value){
        Node *newNode = new Node;

        newNode->data = value;

        newNode->next = NULL;

        return newNode;
    }


    // insert new value at head
    void insertAtHead(int value){

        Node *node = CreateNewNode(value);

        if(head==NULL){
            head = node;
            return;
        }

        // if head is not null 
        node->next = head;
        head = node;
    }
    // print the linked list 
    void traverse(){
        Node* node = head;

        while(node!=NULL){
            cout<<node->data<<" ";
            node = node->next;
        }

        cout<<"\n";
    }
    // search for a singal value 
    int searchDistinctValue(int value){
        Node *node = head;
        int index = 0;
        while(node!=NULL){
            if(node->data==value){
                return index;
            }
            node = node->next;
            index++;
        }
        return -1;
    }

    // search all possible occurrence 
    void searchAllValue(int value){
        Node *node = head;

        int index = 0;

        while (node!=NULL)
        {
            if(node->data==value){
                cout<<value<<" is found at index : "<<index<<"\n";
            }
            node = node->next;
            index++;
        }
        
    }
};

int main(){
    LinkedList l;
    l.traverse();
    l.insertAtHead(15);
    l.traverse();  

    l.insertAtHead(25);
    l.traverse();

    l.insertAtHead(35);
    l.traverse();

    l.insertAtHead(25);
    l.traverse();

   cout<<"25 is founded index : "<<l.searchDistinctValue(25)<<"\n";
   cout<<"35 is founded index : "<<l.searchDistinctValue(35)<<"\n";
   cout<<"15 is founded index : "<<l.searchDistinctValue(15)<<"\n";
   cout<<"40 is founded index : "<<l.searchDistinctValue(40)<<"\n";
   

    l.searchAllValue(25);

    return 0;
}