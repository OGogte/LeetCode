class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums(m);
        for(int i=0;i<m;++i)
        {
            nums[i]=nums1[i];
        }
        int j=0,k=0;
        for(int i=0;i<m+n;++i)
        {
            if(j==m && k<n)
            {
                nums1[i]=nums2[k];
                k++;
            }
            else if(k==n && j<m)
            {
                nums1[i]=nums[j];
                j++;
            }
            else if(nums[j]<nums2[k])
            {
                nums1[i]=nums[j];
                j++;
            }
            else
            {
                nums1[i]=nums2[k];
                k++;
            }
        }
    }
};