class Solution {
public:
    int getDigitSum(int num) {
        int sum = 0;

        while(num > 0) {
            sum += (num % 10);
            num /= 10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> afterSorted(nums);

        auto lambda = [&] (int num1, int num2){
            int dSum1 = getDigitSum(num1);
            int dSum2 = getDigitSum(num2);

            if(dSum1 != dSum2) {
                return dSum1 < dSum2;
            }
            return num1 < num2;
        };
        sort(begin(afterSorted), end(afterSorted), lambda);

        unordered_map<int, int> mpp;
        for(int i = 0; i<n; i++) {
            mpp[nums[i]] = i;
        }

        int swapCount = 0; 
        for(int i = 0; i<n; i++){
            int expectedVal = afterSorted[i];
            int currVal = nums[i];

            if(expectedVal == currVal) continue;

            int idx = mpp[expectedVal];

            nums[i] = expectedVal;
            nums[idx] = currVal;

            mpp[expectedVal] = i;
            mpp[currVal] = idx;

            swapCount++;        
        }
        return swapCount;
    }
};