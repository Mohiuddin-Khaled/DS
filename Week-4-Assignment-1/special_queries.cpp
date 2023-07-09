#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> qt;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        if (q == 0)
        {
            string x;
            cin >> x;
            qt.push(x);
        }
        else if (q == 1)
        {
            if (qt.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << qt.front() << endl;
                qt.pop();
            }
        }
    }
    return 0;
}