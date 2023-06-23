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
void reverse1(Node *&head, Node *tmp)
{
    if (tmp->next == nullptr)
    {
        head = tmp;
        return;
    }
    reverse1(head, tmp->next);
    tmp->next->next = tmp;
    tmp->next = nullptr;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != nullptr)

    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
    }
    reverse1(head, head);
    print(head);
    return 0;
}