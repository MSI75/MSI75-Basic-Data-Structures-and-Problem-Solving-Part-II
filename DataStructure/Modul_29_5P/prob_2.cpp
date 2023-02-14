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

    void Insertion(int id, int value)
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

    void BFS()
    {
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *a = q.front();
            q.pop();
            int l = -1, r = -1, p = -1;
            if (a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }

            if (a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }

            if (a->Parents != NULL)
                p = a->Parents->id;
            cout << "Node Id : " << a->id << " Left : " << l << " Right : " << r << " parents : " << p << "\n";
        }
    }

    void Inorder(Node *a)
    {
        if (a== NULL)
            return;
        Inorder(a->Left);
        cout << a->id << " ";
        Inorder(a->Right);
    }

    void Preorder(Node *a){
        if(a==NULL) return;
        cout<<a->id<<" ";
        Preorder(a->Left);
        Preorder(a->Right);
    }

    void Postorder(Node *a){
        if(a==NULL) return;
        Postorder(a->Left);
        Postorder(a->Right);
        cout<<a->id<<" ";
    }
};

int main()
{
    Binary_Tree bt;
    bt.Insertion(0, 5);
    bt.Insertion(1, 5);
    bt.Insertion(2, 5);
    bt.Insertion(3, 5);
    bt.Insertion(4, 5);
    bt.Insertion(5, 5);
    bt.Insertion(6, 5);

    bt.BFS();

    cout<<"\nInorder : ";
    bt.Inorder(bt.root);
    cout<<"\n";

    cout<<"\nPreorder : ";
    bt.Preorder(bt.root);
    cout<<"\n";

    cout<<"\nPostorder : ";
    bt.Postorder(bt.root);
    cout<<"\n";


}