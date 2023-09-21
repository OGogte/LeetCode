class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs[0].length();
        int m=strs.size();
        string res="";
        for(int i=0;i<m;++i)
        {
            int temp=strs[i].length();
            if(temp<n)
            {
                n=temp;
            }
        }
        vector<int> common(n);
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(strs[j][i]==strs[0][i])
                {
                    common[i]++;
                }
            }
        }
        for(int i=0;i<n;++i)
        {
            if(common[i]==m)
            {
                res+=strs[0][i];
            }
            else
            {
                break;
            }
        }
        return res;
    }
};