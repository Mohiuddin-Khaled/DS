#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = tail->next;
}
int size2(Node *head2)
{
    Node *tmp2 = head2;
    int cnt2 = 0;
    while (tmp2 != NULL)
    {
        cnt2++;
        tmp2 = tmp2->next;
    }
    return cnt2;
}
int size(Node *head)
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
void check(Node *head, Node *head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;
    if (size(head) == size2(head2))
    {
        bool flag = true;
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
        cout << "NO" << endl;
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
        insert(head, tail, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert(head2, tail2, val2);
    }
    check(head, head2);
    return 0;
}