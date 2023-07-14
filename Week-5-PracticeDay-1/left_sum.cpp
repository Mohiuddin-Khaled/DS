#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/
long long getSum(BinaryTreeNode<int> *root, int x)
{
    if (!root)
        return 0;
    int l = getSum(root->left, 1);
    int r = getSum(root->right, 0);
    if (x == 1)
        return l + r + root->data;
    else
        return l + r;
}
long long leftSum(BinaryTreeNode<int> *root)
{
    // Write your code here
    long long sum = getSum(root, 0);
    return sum;
}