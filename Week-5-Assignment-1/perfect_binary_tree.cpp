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
bool perfect(Node *root)
{
    if (!root)
        return false;
    if (!root->left && !root->right)
    {
        return true;
    }
    bool l = perfect(root->left);
    bool r = perfect(root->right);
    return l && r;
}
int main()
{
    Node *root = inputNode();
    bool flag = perfect(root);
    (flag == 1) ? cout << "YES" : cout << "NO";
}