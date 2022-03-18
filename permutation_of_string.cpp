// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

void permutation(string s, vector<string> &v, int index)
{
    if (index == s.length())
    {
        v.push_back(s);
        return;
    }
    for (int i = index; i < s.length(); i++)
    {
        swap(s[index], s[i]);
        permutation(s, v, index + 1);
        swap(s[index], s[i]);
    }
}

vector<string> find_permutation(string s)
{
    vector<string> v;
    int index = 0;
    permutation(s, v, index);
    sort(v.begin(), v.end());
    return v;
}