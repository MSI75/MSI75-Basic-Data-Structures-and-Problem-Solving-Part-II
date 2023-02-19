#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;
    MaxHeap() {}

    // O(log n)
    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    // O(log n)
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    // O(n)
    void printHeap()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << "\n";
    }

    // O(log n)
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

            if (largest == idx)
                break;

            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

    // O(log n)
    void Delete(int idx)
    {
        if (idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    // O(1)
    int getMax()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }

    // O(log n)
    int ExtractMax()
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

    // O(n)
    void Build_from_array(vector<int> &a)
    {
        nodes = a;
        int n = a.size();
        int last_node_leaf = n / 2 - 1;

        for (int i = last_node_leaf; i >= 0; i--)
        {
            down_heapify(i);
        }
    }

    int size()
    {
        return nodes.size();
    }
};

class PriorityQueue
{
public:
    MaxHeap h;
    PriorityQueue() {}

    void push(int x)
    {
        h.insert(x);
    }

    void pop()
    {
        h.Delete(0);
    }

    int top()
    {
        return h.getMax();
    }

    int size()
    {
        return h.size();
    }
};

int main()
{
    PriorityQueue p;
    p.push(5);
    p.push(7);
    p.push(10);
    p.push(1);
    p.push(2);

    while (p.size() != 0)
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << "\n";
    return 0;
}