class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
        {
            return 0;
        }
        map<char,char> st;
        map<char,char> ts;
        for(int i=0; i<s.size();++i)
        {
            if(st[s[i]]==0)
            {
                st[s[i]]=t[i];
            }
            else if(st[s[i]]!=t[i])
            {
                return 0;
            }
            if(ts[t[i]]==0)
            {
                ts[t[i]]=s[i];
            }
            else if(ts[t[i]]!=s[i])
            {
                return 0;
            }
        }
        return 1;
    }
};