class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();++i)
        {
            string temp = operations[i];
            if(temp[1]=='+')
            {
                x++;
            }
            else
            {
                x--;
            }
        }
        return x;
    }
};