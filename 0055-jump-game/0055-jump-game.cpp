class Solution {
public:
    bool canJump(vector<int>& nums) {
        // int max_jump = 0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[0]<i)
            {
                return 0;
            }
            nums[0]=max(nums[0],i+nums[i]);
        }
        return 1;
    }
};