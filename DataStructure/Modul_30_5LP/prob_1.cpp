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

    void BFS()
    {
        if (root == NULL)
            return;

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *a = q.front();
            q.pop();
            int l = -1, r = -1, p = -1;
            if (a->Left != NULL)
            {
                l = a->Left->value;
                q.push(a->Left);
            }

            if (a->Right != NULL)
            {
                r = a->Right->value;
                q.push(a->Right);
            }

            if (a->Parents != NULL)
                p = a->Parents->value;

            cout << "Node Id : " << a->value << " Left : " << l << " Right : " << r << " Parents : " << p << "\n";
        }
    }

    void Delete(int value)
    {
        if (root == NULL)
            return;

        Node *cur = root;
        Node *prv = NULL;

        while (cur != NULL)
        {
            if (value > cur->value)
            {
                prv = cur;
                cur = cur->Right;
            }
            else if (value < cur->value)
            {
                prv = cur;
                cur = cur->Left;
            }
            else
            {
                break;
            }
        }

        if (cur == NULL)
        {
            cout << "Value is not paresent BST\n";
            return;
        }

        // case 1 : Both chaild is NULL

        if (cur->Left == NULL && cur->Right == NULL)
        {
            if (prv->Left != NULL && prv->Left->value == cur->value)
                prv->Left = NULL;
            else
                prv->Right = NULL;

            delete cur;
            return;
        }

        // case 2 : node has only one chaild
        if (cur->Left == NULL && cur->Right != NULL)
        {
            if (prv->Left != NULL && prv->Left->value == cur->value)
                prv->Left = cur->Right;
            else
                prv->Right = cur->Right;
            delete cur;
            return;
        }

        if (cur->Left != NULL && cur->Right == NULL)
        {
            if (prv->Left != NULL && prv->Left->value == cur->value)
                prv->Left = cur->Left;
            else
                prv->Right = cur->Left;

            delete cur;
            return;
        }

        // case 3 : node has two chaild
        Node *temp = cur->Right;
        while (temp->Left != NULL)
        {
            temp = temp->Left;
        }

        int solve = temp->value;
        Delete(solve);
        cur->value = solve;
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
    bst.Inseartion(6);
    bst.Inseartion(4);
    bst.Inseartion(3);
    bst.Inseartion(5);
    bst.Inseartion(7);
    bst.Inseartion(8);

    bst.Delete(6);
    bst.BFS();

    cout<<bst.Search(8)<<"\n";
}