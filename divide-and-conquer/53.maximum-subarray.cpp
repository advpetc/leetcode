class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            if (nums.size() == 0) return 0;
            int curr = nums[0], ret = nums[0];
            for (int i = 1; i < nums.size(); ++i) {
                // compare curr prev sum with prev sum + nums[i]
                // because there are negative
                curr = max(nums[i], curr + nums[i]);
                ret = max(curr, ret);
            }
            return ret;
        }
};
