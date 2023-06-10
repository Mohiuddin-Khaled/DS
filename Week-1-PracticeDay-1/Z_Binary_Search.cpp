#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
                flag = true;
        }
        (flag == 1) ? cout << "found" : cout << "not found";
        cout << endl;
    }
    return 0;
}