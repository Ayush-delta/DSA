class Solution {
public:
    int M = 1e9 + 7;
    int numSubseq(vector<int>& nums, int target) {
       int n = nums.size();

       sort(nums.begin(), nums.end()); 

       vector<int> power(n);
       power[0] = 1;

       for(int i = 1; i<n; i++) {
        power[i] = (power[i-1] * 2) % M;
       }

       int low = 0, high = n - 1;
       int result = 0;
    
       while(low <= high) {
        if(nums[low] + nums[high] <= target) {
            int diff = high - low;
            result = (result % M + power[diff]) % M;
            low++;
        }
        else high--;
       }
       return result;
    }
};