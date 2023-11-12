#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }
    int n = s.size();
    unordered_map<char, char> mpp;
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(t[i]);

        if (mpp[s[i]])
        {
            if (mpp[s[i]] != t[i])
            {
                return false;
            }
        }
        else
        {
            mpp[s[i]] = t[i];
        }
        if (st.size() != mpp.size())
        {
            return false;
        }
    }
    return true;
}