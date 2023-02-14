#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int id;
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

    Node *createNewNode(int id)
    {
        Node *node = new Node;
        node->id = id;
        node->Left = NULL;
        node->Right = NULL;
        node->Parents = NULL;
        return node;
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

    int findDepth(Node *a)
    {
        int d = 0;
        while (a != NULL)
        {
            d++;
            a = a->Left;
        }
        return d;
    }

    bool isPerfectRec(Node *a, int d, int level = 0)
    {
        if (a == NULL)
            return true;

        if (a->Left == NULL && a->Right == NULL)
            return (d = level + 1);

        if (a->Left == NULL || a->Right == NULL)
            return false;

        return isPerfectRec(a->Left, d, level + 1) && isPerfectRec(a->Right, d, level + 1);
    }

    bool isPerfect(Node *a)
    {
        int d = findDepth(a);
        return isPerfectRec(a, d);
    }
};

int main()
{

    Binary_tree bt;
    bt.Inseartion(0);
    bt.Inseartion(1);
    bt.Inseartion(2);
    bt.Inseartion(3);
    bt.Inseartion(4);
    bt.Inseartion(5);
    bt.Inseartion(6);


    if (bt.isPerfect(bt.root))
        cout << "Perfect Binary Tree\n";
    else
        cout << "Not Perfect Binary Tree\n";
}