class Solution {
public:
    int countSubarray(vector<int>& nums, int maxSum) {
        int subArrays = 1;
        int currSum = 0;

        for(int i = 0; i< nums.size(); i++) {
            if(currSum + nums[i] <= maxSum) {
                currSum += nums[i];
            }
            else {
                subArrays++;
                currSum = nums[i];
            }
        }
        return subArrays;
    }
    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 1LL);

        while(low <= high) {
            int mid = (low + high) / 2;
            int subArrays = countSubarray(nums, mid);

            if(subArrays > k) {
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return low;
    }
};