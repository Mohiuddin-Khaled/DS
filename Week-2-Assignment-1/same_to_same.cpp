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

void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int countLength(Node *head)
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

void listCompare(Node *head, Node *head2, int len, int len2)
{
    Node *tmp = head;
    Node *tmp2 = head2;
    int flag = true;
    if (len == len2)
    {
        while (tmp != NULL && tmp2 != NULL)
        {
            if (tmp->val != tmp2->val)
            {
                flag = false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        (flag == 1) ? cout << "YES" : cout << "NO";
    }
    else
    {
        cout << "NO";
    }
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
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2, tail2, val2);
    }
    int len = countLength(head);
    int len2 = countLength(head2);

    listCompare(head, head2, len, len2);

    return 0;
}