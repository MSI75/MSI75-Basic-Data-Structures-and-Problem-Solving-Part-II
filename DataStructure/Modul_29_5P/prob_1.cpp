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

class Binary_Tree
{
public:
    Node *root;
    Binary_Tree()
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

    void Inseart(int id, int value)
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

    void Search(Node *a, int value)
    {
        if (a == NULL)
            return;

        if (a->value == value)
            cout << a->id << " ";
        Search(a->Left, value);
        Search(a->Right, value);
    }
};

int main()
{
    Binary_Tree bt;
    bt.Inseart(0, 5);
    bt.Inseart(1, 10);
    bt.Inseart(2, 15);
    bt.Inseart(3, 10);
    bt.Inseart(4, 15);
    bt.Inseart(5, 5);
    bt.Inseart(6, 10);

    bt.Search(bt.root, 10);
}