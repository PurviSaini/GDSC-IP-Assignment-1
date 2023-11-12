#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{
    map<char, int> mp;
    for (auto i : s)
    {
        mp[i]++;
    }
    s = "";
    vector<pair<char, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b)
         { return a.second > b.second; });
    for (auto i : vec)
    {
        if (i.second > 1)
        {
            for (int j = 0; j < i.second; j++)
            {
                s += i.first;
            }
        }
        else
            s += i.first;
    }
    return s;
}