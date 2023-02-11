#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
};

class Solution
{
    // ListNode *ans;
    // int sz;

public:
    // Solution()
    // {
    //     ans = NULL;
    //     sz = 0;
    // }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *ans = NULL;
        if (list1 == NULL)
            return list2;

        if (list2 == NULL)
            return list1;

        if (list1->data <= list2->data)
        {
            ans = list1;
            ans->next = mergeTwoLists(list1->next, list2);
        }
        else
        {
            ans = list2;
            ans->next = mergeTwoLists(list1, list2->next);
        }
        return ans;
    }


    void push(ListNode **nxt, int value)
    {
        ListNode *newNode = NULL;
        newNode->data = value;
        newNode->next = (*nxt);
        (*nxt) = newNode;
    }

    void print(ListNode *node)
    {
        while (node != NULL)
        {
            cout << node->data << " ";
            node = node->next;
        }
        cout << "\n";
    }
};

int main()
{
    Solution S;
    ListNode *res = NULL;
    ListNode *a = NULL;
    ListNode *b = NULL;

    S.push(&a, 1);
    S.push(&a, 2);
    S.push(&a, 4);

    S.push(&b, 1);
    S.push(&b, 3);
    S.push(&b, 4);

    res = S.mergeTwoLists(a, b);

    S.print(res);
    
}