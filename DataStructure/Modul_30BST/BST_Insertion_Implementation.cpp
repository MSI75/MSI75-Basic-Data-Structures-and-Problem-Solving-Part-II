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
            int l = -1, r = -1;
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
            cout << "Node Id : " << a->value << " Left : " << l << " Right : " << r << "\n";
        }
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

    void Delete(int value)
    {
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
            cout << "Value is not present in BST\n";
            return;
        }

        // Case 1 : both chaild is NULL
        if (cur->Left == NULL && cur->Right == NULL)
        {
            if (prv->Left != NULL && prv->Left->value == cur->value)
                prv->Left = NULL;
            else
                prv->Right = NULL;
            delete cur;
            return;
        }

        // Case 2 : node has only one chaild
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

        int saved = temp->value;
        Delete(saved);
        cur->value = saved;
    }
};

int main()
{
    BST bst;
    bst.Inseartion(50);
    bst.Inseartion(30);
    bst.Inseartion(100);
    bst.Inseartion(20);
    bst.Inseartion(40);
    bst.Inseartion(80);
    bst.Inseartion(75);
    bst.Inseartion(90);
    bst.Inseartion(70);

    // bst.BFS();
    // if (bst.Search(0))
    //     cout << "true\n";
    // else
    //     cout << "false\n";

    // bst.Delete(8);
    // bst.Delete(6);
    bst.BFS();

    return 0;
}