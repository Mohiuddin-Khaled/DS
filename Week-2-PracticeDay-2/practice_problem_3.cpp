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
void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
int listSize(Node *head)
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
void mid(Node *head)
{
    int len = listSize(head);
    Node *tmp = head;
    for (int i = 1; i < (len / 2); i++)
    {
        tmp = tmp->next;
    }
    if (len % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    else
    {
        cout << tmp->next->val << endl;
    }
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
        insert(head, tail, val);
    }
    mid(head);
    return 0;
}