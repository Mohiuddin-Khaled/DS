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
int mx = INT_MIN;
int mn = INT_MAX;
void printLeaf(Node *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        mx = max(root->val, mx);
        mn = min(root->val, mn);
    }
    printLeaf(root->left);
    printLeaf(root->right);
}
int main()
{
    Node *root = inputNode();
    printLeaf(root);
    cout << mx << " " << mn << endl;
    return 0;
}