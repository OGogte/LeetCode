class Solution {
public:
    int generator(int n)
    {
        int ne=0;
        while(n!=0)
        {
            int num = n % 10;
            ne += num * num;
            n = n / 10;
        }
        return ne;
    }
    bool isHappy(int n) {
        set<int> s;
        while(n!=1 && !s.count(n))
        {
            s.insert(n);
            n = generator(n);
        }
        return n==1;
    }
};