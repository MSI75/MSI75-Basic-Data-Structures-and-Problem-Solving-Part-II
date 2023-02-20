#include <bits/stdc++.h>
using namespace std;

class MaxHeap
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

    int getMax()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }

        return nodes[0];
    }

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

    void Build_from_array(vector<int> &a)
    {
        nodes = a;
        int n = a.size();
        int last_node_leaf = n / 2 - 1;

        for (int i = last_node_leaf; i >= 0; i--)
            down_heapify(i);
    }
};

vector<int> sort_heap(vector<int> &a)
{
    MaxHeap heap;
    heap.Build_from_array(a);
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
        ans.push_back(heap.ExtractMax());
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> sorted = sort_heap(v);

    for (int i = 0; i < k; i++)
        cout << sorted[i] << " ";
    cout << "\n";
}

// 6 3
// 5 2 9 1 5 6
