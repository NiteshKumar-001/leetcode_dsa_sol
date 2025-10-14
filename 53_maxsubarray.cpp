class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int subArraySum = -10000;
        int maxSubSum = nums[0];

    for(const auto& num : nums) {   
       subArraySum = max(num + subArraySum, num);
       maxSubSum = max(maxSubSum, subArraySum);
    }

    return maxSubSum;
    }
};