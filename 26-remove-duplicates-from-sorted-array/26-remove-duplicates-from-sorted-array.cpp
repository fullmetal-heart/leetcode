class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=1;
        int n=nums.size();
        while(right<n)
        {
            if(nums[left]!=nums[right])
            {
                left++;
                swap(nums[left],nums[right]);
                
            }
            right++;
        }
        return left+1;   
    }
};