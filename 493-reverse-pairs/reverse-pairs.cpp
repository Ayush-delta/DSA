class Solution {
public:
     void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;
        int i = low;
        int j = mid + 1;

        while(i <= mid && j <= high) {

            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while(j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for(int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }


    int countPairs(vector<int>& nums, int low, int mid, int high) {

        int cnt = 0;
        int j = mid + 1;

        for(int i = low; i <= mid; i++) {

            while(j <= high &&
                  (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }

            cnt += j - (mid + 1);
        }

        return cnt;
    }


    void mergeSort(vector<int>& nums, int low, int high, int& cnt) {

        if(low >= high) {
            return;
        }

        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid, cnt);
        mergeSort(nums, mid + 1, high, cnt);
        cnt += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
    }

    int reversePairs(vector<int>& nums) {
        int cnt = 0;
        mergeSort(nums, 0, nums.size() - 1, cnt);
        return cnt;
    }
};