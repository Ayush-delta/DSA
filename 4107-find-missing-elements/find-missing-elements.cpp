class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        unordered_set<int> st;

        for (int num : nums) {
            mini = min(mini, num);
            maxi = max(maxi, num);
            st.insert(num);
        }

        vector<int> ans;

        for (int i = mini + 1; i < maxi; i++) {

            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }

        return ans;       
    }
};