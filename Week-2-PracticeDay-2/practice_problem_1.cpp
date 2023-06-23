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
    if (head == nullptr)
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
    while (tmp != nullptr)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int len, len2;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
        len = listSize(head);
    }
    Node *head2 = nullptr;
    Node *tail2 = nullptr;
    while (true)
    {
        int val2;
        cin >> val2;
        if (val2 == -1)
            break;
        insert(head2, tail2, val2);
        len2 = listSize(head2);
    }
    (len == len2) ? cout << "YES" : cout << "NO";
    cout << endl;
    return 0;
}