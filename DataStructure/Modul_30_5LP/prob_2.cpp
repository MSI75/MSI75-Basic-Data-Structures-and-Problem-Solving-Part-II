#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Left;
    Node *Right;
    Node *Parents;
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }

    Node *createNewNode(int value)
    {
        Node *node = new Node;
        node->value = value;
        node->Left = NULL;
        node->Right = NULL;
        node->Parents = NULL;
        return node;
    }

    void Inseartion(int value)
    {
        Node *newNode = createNewNode(value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }

        Node *cur = root;
        Node *prv = NULL;
        while (cur != NULL)
        {
            if (newNode->value > cur->value)
            {
                prv = cur;
                cur = cur->Right;
            }
            else
            {
                prv = cur;
                cur = cur->Left;
            }
        }

        if (newNode->value > prv->value)
            prv->Right = newNode;
        else
            prv->Left = newNode;
    }

    int MaxHigh(Node *cur)
    {
        if (cur == NULL)
            return 0;

        while (cur->Right != NULL)
        {
            cur = cur->Right;
        }
        return cur->value;
    }

    int MinHigh(Node *cur)
    {
        if (cur == NULL)
            return 0;
        while (cur->Left != NULL)
            cur = cur->Left;

        return cur->value;
    }

    bool isBST(Node *root)
    {
        if (root == NULL)
            return true;

        if (root->Left != NULL && MaxHigh(root->Left) > root->value)
            return false;

        if (root->Right != NULL && MinHigh(root->Right) < root->value)
            return false;

        if (!isBST(root->Left) || !isBST(root->Right))
            return false;

        return true;
    }
    
};

int main()
{
    BST bst;
    bst.Inseartion(6);
    bst.Inseartion(4);
    bst.Inseartion(3);
    bst.Inseartion(5);
    bst.Inseartion(7);
    bst.Inseartion(8);

    // bst.BFS();
    cout << bst.MinHigh(bst.root) << "\n"
         << bst.MaxHigh(bst.root) << "\n";

    if (bst.isBST(bst.root))
    {
        cout << "Valid\n";
    }
    else
    {
        cout << "Invalid\n";
    }
}