#include <bits/stdc++.h>
using namespace std;

template <class T>
class MaxHeap
{
    vector<T> nodes;
    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
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

            if (l < nodes.size() && nodes[largest] < nodes[l])
                largest = l;
            if (r < nodes.size() && nodes[largest] < nodes[r])
                largest = r;
            if (idx == largest)
                break;

            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

public:
    MaxHeap() {}

    void insert(int x)
    {
        nodes.push_back(x);
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

    void Print()
    {
        for (int i = 0; i < nodes.size(); i++)
            cout << nodes[i] << " ";
        cout << "\n";
    }

    int size()
    {
        return nodes.size();
    }
};

int main()
{
    MaxHeap<int> heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(30);
    heap.insert(25);

    heap.Print();
    cout << heap.size() << "\n";

    heap.Delete(0);
    heap.Print();
    cout << heap.size() << "\n";
}