#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            flag = true;
        }
    }
    (flag == 1) ? cout << "YES" : cout << "NO";
    return 0;
}