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
vector<int> printNode(Node *root)
{
    vector<int> v;
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();
        v.push_back(pr->val);
        if (pr->right)
            q.push(pr->right);
        if (pr->left)
            q.push(pr->left);
    }
    reverse(v.begin(), v.end());
    return v;
}
int main()
{
    Node *root = inputNode();
    vector<int> v = printNode(root);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}