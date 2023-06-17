#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void maxFind(Node *&head)
{
    Node *tmp = head;

    int mx = INT_MIN;

    while (tmp != NULL)
    {
        if (tmp->val > mx)
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << mx << " ";
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void minFind(Node *&head)
{
    Node *tmp = head;
    int mn = INT_MAX;
    while (tmp != NULL)
    {
        if (tmp->val < mn)
        {
            mn = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << mn;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    maxFind(head);
    minFind(head);
    return 0;
}