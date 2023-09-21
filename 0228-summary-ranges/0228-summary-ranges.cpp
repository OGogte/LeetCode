class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size()==0)
        {
            return res;
        }
        nums.push_back(nums[0]);
        long long int curr_min=nums[0];
        long long int curr_max=0;
        long long int curr_index=0;
        string temp="";
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]==curr_min+i-curr_index)
            {
                curr_max=nums[i];
            }
            else
            {
                temp=to_string(curr_min);
                if(i!=curr_index+1)
                {
                    temp+="->";
                    string s = to_string(curr_max);
                    temp+=s;
                }
                curr_index=i;
                curr_min=nums[i];
                res.push_back(temp);
            }
        }
        return res;
    }
};