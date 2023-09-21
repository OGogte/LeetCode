class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int flag=0;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]==32)
            {
                flag=1;
            }
            else
            {
                if(flag)
                {
                    count=1;
                    flag=0;
                }
                else
                {
                    count++;
                }
            }
        }
        return count;
    }
};