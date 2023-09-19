class Solution {
public:
    bool isPalindrome(int x) {
         string s = to_string(x);
         string r = s;
         reverse(s.begin(),s.end());
         for(int i=0;i<s.length();++i)
         {
             if(s[i]!=r[i])
             {
                 return 0;
             }
         }
         return 1;
    }
};