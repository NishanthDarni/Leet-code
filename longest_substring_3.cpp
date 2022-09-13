#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        map<char, int> m;
        int max_val = 0, temp;
        int j, k;
        for (int i = 0; i < s.size(); i++)
        {
            temp = 1;
            j = i + 1;
            m.insert(pair<char, int>(s[i], 1));
            while (j < s.size())
            {
                if (m.find(s[j]) == m.end())
                {
                    m.insert(pair<char, int>(s[j], 1));
                    temp++;
                    j++;
                }
                else
                {
                    break;
                }
            }
            m.clear();
            max_val = max(temp, max_val);
        }
        return max_val;
    }
};