#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Left;
    Node *Right;
};

class BST
{
    Node *root;
    Node *createNewNode(int value)
    {
        Node *node = new Node;
        node->value = value;
        node->Left = NULL;
        node->Right = NULL;
        return node;
    }

public:
    BST()
    {
        root = NULL;
    }
    ~BST()
    {
        delete root;
    }
    void Insert(int value)
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
    bool Search(int value)
    {
        Node *cur = root;
        while (cur != NULL)
        {
            if (value > cur->value)
                cur = cur->Right;
            else if (value < cur->value)
                cur = cur->Left;
            else
                return true;
        }
        return false;
    }
};
int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout << bst.Search(10) << "\n"; // 1
    cout << bst.Search(9) << "\n";  // 1
    cout << bst.Search(20) << "\n"; // 1
    cout << bst.Search(60) << "\n"; // 0
    return 0;
}
