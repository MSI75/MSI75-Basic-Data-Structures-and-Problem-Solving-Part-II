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

            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

public:
    MinHeap() {}

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

    int getMin()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }

    int ExtractMin()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }
        int rent = nodes[0];
        Delete(0);
        return rent;
    }

    void Buil_from_array(vector<int> &a)
    {
        nodes = a;
        int n = nodes.size();
        int last_node_leaf = n / 2 - 1;
        for (int i = last_node_leaf; i >= 0; i--)
            down_heapify(i);
    }
};

vector<int> sort_heap(vector<int> &a)
{
    MinHeap heap;
    heap.Buil_from_array(a);
    vector<int> ans;

    for (int i = 0; i < a.size(); i++)
        ans.push_back(heap.ExtractMin());
    return ans;
}

int main()
{
    vector<int> v = {9, 2, 7, 3, 4, 6, 4, 1, 5};
    vector<int> sorted_heap = sort_heap(v);
    for (int i = 0; i < v.size(); i++)
        cout << sorted_heap[i] << " ";
    cout << "\n";

    // vector<int>v = {9,2,7,3,4,6,4,1,5};
    // heap.Buil_from_array(v);
    // heap.Print();
}