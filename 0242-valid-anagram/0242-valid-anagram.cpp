class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> st;
        if(s.length()!=t.length())
        {
            return 0;
        }
        for(int i=0;i<s.length();++i)
        {
            st[s[i]]++;
        }
        for(int i=0;i<t.length();++i)
        {
            if(st[t[i]]==0)
            {
                return 0;
            }
            st[t[i]]--;
        }
        return 1;
    }
};