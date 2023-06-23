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
void insertAtNode(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
int countNode(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void midNode(Node *head, int len)
{
    Node *tmp = head;
    int mid = (len + 1) / 2;
    for (int i = 0; i < mid - 1; i++)
    {
        tmp = tmp->next;
    }
    (len % 2 == 0) ? cout << tmp->val << " " << tmp->next->val : cout << tmp->val;
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertAtNode(head, tail, val);
    }
    int len = countNode(head);
    midNode(head, len);
    return 0;
}