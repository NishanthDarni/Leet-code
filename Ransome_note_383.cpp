class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        map<char,int>::iterator itr;
        for(int i=0;i<ransomNote.size();i++)
        {
            itr=m.find(ransomNote[i]);
            if(itr==m.end())
            {
                m.insert(pair<char,int>(ransomNote[i],1));
            }else{
                itr->second++;
            }
        }
        for(int i=0;i<magazine.size();i++)
        {
            itr=m.find(magazine[i]);
            if(itr!=m.end())
            {
                itr->second--;
                if(itr->second==0)
                {
                    m.erase(itr);
                }
            }
        }
        if(m.empty())
        {
            return true;
        }
        return false;
    }
};