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
void insertAtNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void checkDuplicate(Node *head)
{
    Node *tmp = head;
    Node *tmp2 = head->next;
    bool flag = false;
    while (tmp->next != NULL)
    {
        if (tmp->val == tmp2->val)
        {
            flag = true;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    (flag == 1) ? cout << "YES" : cout << "NO";
    cout << endl;
}
void printNode(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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
    // selection sort
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    checkDuplicate(head);

    return 0;
}