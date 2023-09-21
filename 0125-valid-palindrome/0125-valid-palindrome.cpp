class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.size();++i)
        {
            if(s[i]>47 && s[i]<58)
            {
                a+=s[i];
            }
            if(s[i]>64 && s[i]<91)
            {
                a+=s[i];
            }
            if(s[i]>96 && s[i]<123)
            {
                a+=s[i];
            }
        }
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        string b=a;
        reverse(b.begin(),b.end());
        for(int i=0;i<a.length();++i)
        {
            if(a[i]!=b[i])
            {
                return 0;
            }
        }
        return 1;
    }
};