class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int cnt_max = -1;
        int ind = 0;

        for(int i = 0; i < n; i++) {
            int cnt_ones = 0;

            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 1) {
                    cnt_ones++;
                }
            }

            if(cnt_ones > cnt_max) {
                cnt_max = cnt_ones;
                ind = i;
            }
        }

        return {ind, cnt_max};
    }
};