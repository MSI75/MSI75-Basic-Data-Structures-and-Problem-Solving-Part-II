#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int id;
    int value;
    Node *left;
    Node *right;
    Node *parents;
};

class Binary_tree
{
public:
    Node *root;

    Binary_tree()
    {
        root = NULL;
    }

    Node *createNewNode(int data, int value)
    {
        Node *node = new Node;
        node->id = data;
        node->value = value;
        node->left = NULL;
        node->right = NULL;
        node->parents = NULL;
        return node;
    }

    // manually inseart node in binary tree and print information
    // void build_binary_tree()
    // {
    //     Node *allNode[6];
    //     for (int i = 0; i <= 6; i++)
    //         allNode[i] = createNewNode(i);
    //     allNode[0]->left = allNode[1];
    //     allNode[0]->right = allNode[2];

    //     allNode[1]->left = allNode[5];
    //     allNode[1]->parents = allNode[0];

    //     allNode[2]->left = allNode[3];
    //     allNode[2]->right = allNode[4];
    //     allNode[2]->parents = allNode[0];

    //     allNode[3]->parents = allNode[1];
    //     allNode[4]->parents = allNode[1];

    //     root = allNode[0];
    // }

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

            if (a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left = newNode;
                newNode->parents = a;
                return;
            }

            if (a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right = newNode;
                newNode->parents = a;
                return;
            }
        }
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
            int p = -1, l = -1, r = -1;

            if (a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }

            if (a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }

            if (a->parents != NULL)
                p = a->parents->id;

            cout << "Node id = " << a->id << " Left child = "
                 << l << " Right child = " << r << " parents = " << p << "\n";
        }
    }

    void DFS(Node *a)
    {
        if (a == NULL)
            return;
        cout << a->id << " ";
        DFS(a->left);
        DFS(a->right);
    }

    void Inorder(Node *a)
    {
        if (a == NULL)
            return;

        Inorder(a->left);
        cout << a->id << " ";
        Inorder(a->right);
    }

    void Preorder(Node *a)
    {
        if (a == NULL)
            return;
        cout << a->id << " ";
        Preorder(a->left);
        Preorder(a->right);
    }

    void Postorder(Node *a)
    {
        if (a == NULL)
            return;
        Postorder(a->left);
        Postorder(a->right);
        cout << a->id << " ";
    }

    void Search(Node *a, int value)
    {
        if (a == NULL)
            return;
        if (a->value == value)
            cout << a->id << " ";
        Search(a->left, value);
        Search(a->right, value);
    }
};

int main()
{
    Binary_tree t;
    // t.build_binary_tree();
    // t.BFS();
    // t.DFS(t.root);
    // t.Inorder(t.root);
    // t.Preorder(t.root);

    t.Inseartion(0, 5);
    t.Inseartion(1, 10);
    t.Inseartion(2, 10);
    t.Inseartion(3, 9);
    t.Inseartion(4, 8);
    t.Inseartion(5, 5);
    t.Inseartion(6, 7);
    // t.BFS(); 
    cout << "\n";
    t.Search(t.root, 5);
    cout << "\n";
    t.Search(t.root, 10);
    cout << "\n";
    // t.Postorder(t.root);
}