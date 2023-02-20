#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    vector<int> nodes;
    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] < nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }
    void down_heapify(int idx)
    {
        while (1)
        {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if (l < nodes.size() && nodes[largest] > nodes[l])
                largest = l;
            if (r < nodes.size() && nodes[largest] > nodes[r])
                largest = r;
            if (idx == largest)
                break;
            
            swap(nodes[idx],nodes[largest]);
            idx = largest;
        }
    }

public:
    MinHeap() {}

    void insert(int x)
    {
        nodes.push_back(-x);
        up_heapify(nodes.size() - 1);
    }

    void Delete(int idx)
    {
        if (idx > nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    void Print(){
        for(int i = 0; i<nodes.size(); i++){
            cout<<nodes[i]<<" ";
        }cout<<"\n";
    }

    int getMax(){
        if(nodes.empty()){
            cout<<"Heap is empty!\n";
            return - 1;
        }
        return nodes[0]*-1;
    }

    int ExtracMax(){
        if(nodes.empty()){
            cout<<"Heap is empty!\n";
            return - 1;
        }
        int rent = nodes[0];
        Delete(0);
        return rent;
    }

    int size(){
        return nodes.size();
    }
};

class PriorityQueue{
    MinHeap heap;
    public:

    void push(int x){
        heap.insert(x);
    }

    void pop(){
        heap.Delete(0);
    }

    int top(){
        return heap.getMax();
    }

    int size(){
        return heap.size();
    }
};

int main(){
    PriorityQueue p;
    p.push(7);
    p.push(1);
    p.push(5);
    p.push(6);
    p.push(3);

    cout<<p.top()<<"\n";
    p.pop();

    cout<<p.top()<<"\n";
    p.pop();

}