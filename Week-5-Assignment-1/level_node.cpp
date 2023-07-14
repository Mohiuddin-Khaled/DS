#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputNode()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        Node *myleft, *myright;
        int l, r;
        cin >> l >> r;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        // connection
        parent->left = myleft;
        parent->right = myright;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}
void getLevel(Node *root, int x)
{
    if (!root)
        return;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    Node *node;
    int flag = 0;
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *p = pr.first;
        int level = pr.second;

        if (level == x)
        {
            cout << p->val << " ";
            flag = 1;
        }
        if (p->left)
            q.push({p->left, level + 1});
        if (p->right)
            q.push({p->right, level + 1});
    }
    if (flag == 0)
        cout << "Invalid" << endl;
}
int main()
{
    Node *root = inputNode();
    int x;
    cin >> x;
    getLevel(root, x);
    return 0;
}