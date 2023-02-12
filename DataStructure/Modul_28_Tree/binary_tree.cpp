#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int id;
    Node *left;
    Node *right;
    Node *parents;
};

class Binary_tree
{
public:
    Node *root;
    Node *allNode[6];

    Binary_tree()
    {
        root = NULL;
    }

    Node *createNewNode(int data)
    {
        Node *node = new Node;
        node->id = data;
        node->left = NULL;
        node->right = NULL;
        node->parents = NULL;
        return node;
    }

    // manually inseart node in binary tree and print information 
    void build_binary_tree()
    {
        for (int i = 0; i <= 6; i++)
            allNode[i] = createNewNode(i);
        allNode[0]->left = allNode[1];
        allNode[0]->right = allNode[2];

        allNode[1]->left = allNode[3];
        allNode[1]->right = allNode[4];
        allNode[1]->parents = allNode[0];

        allNode[3]->parents = allNode[1];
        allNode[4]->parents = allNode[1];

        allNode[2]->left = allNode[5];
        allNode[2]->right = allNode[6];
        allNode[2]->parents = allNode[0];
        allNode[5]->parents = allNode[2];
        allNode[6]->parents = allNode[2];

        root = allNode[0];
    }

    void print_tree_info()
    {
        for (int i = 0; i <= 6; i++)
        {
            int p = -1;
            int l = -1;
            int r = -1;
            if (allNode[i]->parents != NULL)
                p = allNode[i]->parents->id;
            if (allNode[i]->left != NULL)
                l = allNode[i]->left->id;
            if (allNode[i]->left != NULL)
                r = allNode[i]->right->id;

            cout << "Node " << i << " : parents = " << p << " : left = " << l << " : right = " << r << "\n";
        }
    }
};

int main()
{
    Binary_tree t;
    t.build_binary_tree();
    t.print_tree_info();
}