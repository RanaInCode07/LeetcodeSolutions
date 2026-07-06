class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        else if (nums.size() == 2) return max(nums[0], nums[1]);
        if (nums[0] > nums[1]) nums[1] = nums[0];
        for (int i=2; i<nums.size(); i++){
            if (nums[i]+nums[i-2] < nums[i-1]) nums[i] = nums[i-1];
            else nums[i] = nums[i] + nums[i-2];
        }
        return nums[nums.size()-1];
    }
};