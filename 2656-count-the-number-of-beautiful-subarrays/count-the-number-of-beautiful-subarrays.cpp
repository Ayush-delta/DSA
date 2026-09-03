class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long ans = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int val = 0;
        for(auto ele:nums){
            val = val^ele;

            if(mpp.find(val) != mpp.end()){
                ans += mpp[val];
            }
            mpp[val]++;
        }
       return ans;
    }
};