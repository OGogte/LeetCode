class Solution {
public:
    bool isValid(string s) 
    {
        if(s.length()==1)
        {
            return false;
        }
        else
        {
            stack<char> b;
            for(int i=0;i<s.size();++i)
            {
                if(s[i]=='(' || s[i]=='{' || s[i] == '[' )
                {
                    b.push(s[i]);
                }
                else
                {
                    if(b.empty())
                    {
                        return false;
                    }
                    else
                    {
                        if((b.top()=='(' && s[i]==')') || (b.top()=='[' && s[i]==']') || (b.top()=='{' && s[i]=='}'))
                        {
                            b.pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
            }
            if(b.empty())
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};