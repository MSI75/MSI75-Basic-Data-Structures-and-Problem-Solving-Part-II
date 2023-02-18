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
};

int main()
{
    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(30);
    heap.insert(25);

    heap.printHeap();

    cout << "Max Heap : " << heap.getMax() << "\n";
    cout << "ExtracMax : " << heap.ExtractMax() << "\n";
    cout << "ExtracMax : " << heap.ExtractMax() << "\n";

    // heap.Delete(0);
    // heap.printHeap();

    return 0;
}