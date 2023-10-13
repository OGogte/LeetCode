class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        int k=0;
        if(nums.size()<3)
        {
            return nums.size();
        }
        for(int i=0;i<nums.size();++i)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]<3)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};