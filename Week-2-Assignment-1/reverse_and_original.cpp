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
void printReverse(Node *&head)
{
    Node *tmp = head;
    // base case
    if (tmp == NULL)
        return;

    printReverse(tmp->next);
    cout << tmp->val << " ";
}
void printOriginal(Node *&head)
{
    Node *tmp = head;
    // base case
    if (tmp == NULL)
        return;
    cout << tmp->val << " ";
    printOriginal(tmp->next);
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
    printReverse(head);
    cout << endl;
    printOriginal(head);
    return 0;
}