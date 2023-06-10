#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0)
        {
            char c = i + 97;
            cout << c << " : " << v[i] << endl;
        }
    }
    return 0;
}