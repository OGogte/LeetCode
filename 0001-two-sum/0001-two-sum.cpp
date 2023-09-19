class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            int k=target;
            k=target-nums[i];
            for(int j=0;j<n;++j)
            {
                if(j!=i &&k==nums[j])
                {
                    k=k-nums[j];
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
            if(k==0)
            {
                break;
            }
        }
        return v;
    }
};