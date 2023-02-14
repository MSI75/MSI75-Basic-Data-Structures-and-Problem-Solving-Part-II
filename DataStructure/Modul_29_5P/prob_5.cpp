#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int id;
    Node *Left;
    Node *Right;
    Node *parents;
};

class Binary_Tree
{
public:
    Node *root;
    Binary_Tree()
    {
        root = NULL;
    }
    Node *createNewNode(int id)
    {
        Node *newNode = new Node;
        newNode->id = id;
        newNode->Left = NULL;
        newNode->Right = NULL;
        newNode->parents = NULL;
        return newNode;
    }

    void Inseartion(int id)
    {
        Node *newNode = createNewNode(id);
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
                newNode->parents = a;
                return;
            }

            if (a->Right != NULL)
            {
                q.push(a->Right);
            }
            else
            {
                a->Right = newNode;
                newNode->parents = a;
                return;
            }
        }
    }

    bool isComplateBT(Node *a)
    {
        if (a == NULL)
            return true;

        queue<Node *> q;
        q.push(root);

        int flag = false;
        while (!q.empty())
        {
            Node *a = q.front();
            q.pop();

            if (a->Left)
            {
                if (flag == true)
                    return false;
                q.push(a->Left);
            }
            else
                flag = true;
            
            if (a->Right)
            {
                if (flag == true)
                    return false;
                q.push(a->Right);
            }
            else
                flag = true;
        }
        return true;
    }
};

int main()
{
    Binary_Tree bt;
    bt.Inseartion(0);
    bt.Inseartion(1);
    bt.Inseartion(2);
    bt.Inseartion(3);
    bt.Inseartion(4);
    bt.Inseartion(5);
    bt.Inseartion(6);

    if (bt.isComplateBT(bt.root))
        cout << "Complate Binary Tree\n";
    else
        cout << "Not Complate Binary Tree\n";
}