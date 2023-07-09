#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    int flag = 1;
    if (st.size() != q.size())
    {
        flag = 0;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = 0;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    (flag == 1) ? cout << "YES" : cout << "NO";
    return 0;
}