#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> m;
    vector<int> x(m);
    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
    }
    int a;
    cin >> a;
    v.insert(v.begin() + a, x.begin(), x.end());
    for (int c : v)
    {
        cout << c << " ";
    }
    return 0;
}