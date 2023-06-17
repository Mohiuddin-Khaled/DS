#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int psum[n];
    psum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        psum[i] = a[i] + psum[i - 1];
    }
    reverse(psum, psum + n);
    for (int i = 0; i < n; i++)
    {
        cout << psum[i] << " ";
    }
    return 0;
}