#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for (int x : v2)
    {
        cout << x << " ";
    }
    v2 = v;
    for (int x : v2)
    {
        cout << x << " ";
    }
    return 0;
}