class Solution {
public:
    int romanToInt(string s) {
        int x =0;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='M')
            {
                x+=1000;
            }
            else if(s[i]=='D')
            {
                x+=500;
            }
            else if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    x+=400;
                    i++;
                }
                else if(s[i+1]=='M')
                {
                    x+=900;
                    i++;
                }
                else
                {
                    x+=100;
                }
            }
            else if(s[i]=='L')
            {
                x+=50;
            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    x+=40;
                    i++;
                }
                else if(s[i+1]=='C')
                {
                    x+=90;
                    i++;
                }
                else
                {
                    x+=10;
                }
            }
            else if(s[i]=='V')
            {
                x+=5;
            }
            else
            {
                if(s[i+1]=='V')
                {
                    x+=4;
                    i++;
                }
                else if(s[i+1]=='X')
                {
                    x+=9;
                    i++;
                }
                else
                {
                    x+=1;
                }
            }
        }
        return x;
    }
};