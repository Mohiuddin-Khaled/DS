#include <bits/stdc++.h>
using namespace std;
int main()
{
    string siteName;
    list<string> website;
    while (true)
    {
        cin >> siteName;
        if (siteName == "end")
            break;
        website.push_back(siteName);
    }
    int q;
    cin >> q;
    list<string>::iterator search;
    while (q--)
    {
        string traverse;
        cin >> traverse;
        if (traverse == "visit")
        {
            cin >> siteName;
            int found = 0;
            for (auto it = website.begin(); it != website.end(); it++)
            {
                if (*it == siteName)
                {
                    found = 1;
                    search = find(website.begin(), website.end(), siteName);
                    break;
                }
            }
            if (found == 1)
            {
                cout << siteName << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (traverse == "next")
        {
            search++;
            if (search != website.end())
            {
                cout << *search << endl;
            }
            else
            {
                cout << "Not Available" << endl;
                search--;
            }
        }
        else if (traverse == "prev")
        {
            if (search != website.begin())
            {
                search--;
                cout << *search << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}