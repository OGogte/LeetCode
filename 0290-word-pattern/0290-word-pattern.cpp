class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp;
        map<string,char> pm;
        string temp="";
        vector<string> word;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]==32)
            {
                word.push_back(temp);
                temp="";
            }
            else
            {
                temp+=s[i];
            }
        }
        word.push_back(temp);
        if(pattern.length()!=word.size())
        {
            return 0;
        }
        for(int i=0;i<pattern.length();++i)
        {
            if(mp[pattern[i]]=="")
            {
                mp[pattern[i]]=word[i];
            }
            else if(mp[pattern[i]]!=word[i])
            {
                return 0;
            }
            if(pm[word[i]]==0)
            {
                pm[word[i]]=pattern[i];
            }
            else if(pm[word[i]]!=pattern[i])
            {
                return 0;
            }
        }
        return 1;
    }
};