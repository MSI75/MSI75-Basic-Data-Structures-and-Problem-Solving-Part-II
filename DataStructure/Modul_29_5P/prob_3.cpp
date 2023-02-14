#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int id;
    int value;
    Node *Left;
    Node *Right;
    Node *Parents;
};

class Binary_tree
{
public:
    Node *root;
    Binary_tree()
    {
        root = NULL;
    }
    Node *createNewNode(int id, int value)
    {
        Node *node = new Node;
        node->id = id;
        node->value = value;
        node->Left = NULL;
        node->Right = NULL;
        node->Parents = NULL;
        return node;
    }

    void Inseartion(int id, int value)
    {
        Node *newNode = createNewNode(id, value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }

        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *a = q.front();
            q.pop();
            if (a->Left != NULL)
            {
                q.push(a->Left);
            }
            else
            {
                a->Left = newNode;
                newNode->Parents = a;
                return;
            }

            if (a->Right != NULL)
            {
                q.push(a->Right);
            }
            else
            {
                a->Right = newNode;
                newNode->Parents = a;
                return;
            }
        }
    }
    // higt tree 1
    int high_tree(Node *a)
    {
        if (a == NULL)
            return 0;
        else
        {
            int lDepth = high_tree(a->Left);
            int rDepth = high_tree(a->Right);

            if (lDepth > rDepth)
                return (lDepth + 1);
            else
                return (rDepth + 1);
        }
    }
    
    // high tree 2
    void High_tree()
    {
        queue<Node *> q;
        q.push(root);

        int h = 0;
        while (!q.empty())
        {
            int sz = q.size();
            for (int i = 0; i < sz; i++)
            {
                Node *a = q.front();
                q.pop();
                int l = -1, r = -1, p = -1;
                if (a->Left != NULL)
                    q.push(a->Left);
                if (a->Right != NULL)
                    q.push(a->Right);
            }
            h++;
        }
        cout << h << "\n";
    }
};

int main()
{
    Binary_tree bt;
    bt.Inseartion(0, 5);
    bt.Inseartion(1, 5);
    bt.Inseartion(2, 5);
    bt.Inseartion(3, 5);
    bt.Inseartion(4, 5);
    bt.Inseartion(5, 5);
    bt.Inseartion(6, 5);
    bt.Inseartion(6, 5);

    bt.High_tree();
    cout << bt.high_tree(bt.root) << "\n";
}