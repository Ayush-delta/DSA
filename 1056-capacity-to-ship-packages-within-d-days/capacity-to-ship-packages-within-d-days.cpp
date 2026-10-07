class Solution {
public:
    int func(vector<int>& weights, int cap) {
        int days = 1, load = 0;
        int n = weights.size();

        for(int i = 0; i<n; i++) {
            if(load + weights[i] > cap){
                days += 1;
                load = weights[i];
            }
            else load += weights[i];
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(), weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0LL);

        while(low <= high) {
            int mid = (low + high) / 2;
            int noofDays = func(weights, mid);

            if(noofDays <= days){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};