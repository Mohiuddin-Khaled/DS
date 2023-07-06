#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    if (st.size() != q.size())
    {
        flag = false;
    }
    else
    {
        while (!st.empty())
        {
            int stv = st.top();
            st.pop();
            int qv = q.front();
            q.pop();
            if (stv != qv)
            {
                flag = false;
                break;
            }
        }
    }
    (flag == 1) ? cout << "YES" : cout << "NO";
    return 0;
}