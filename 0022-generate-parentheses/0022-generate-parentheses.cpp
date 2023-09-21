class Solution {
public:
    void generator(int open,int close,vector<string>& res,string& s,int n)
    {
        if(s.size()==2*n)
        {
            res.push_back(s);
        }
        if(close<open)
        {
            s+=')';
            generator(open,close+1,res,s,n);
            s.pop_back();
        }
        if(open<n)
        {
            s+='(';
            generator(open+1,close,res,s,n);
            s.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int open=0,close=0;
        string s="";
        generator(open,close,res,s,n);
        return res;
    }

};