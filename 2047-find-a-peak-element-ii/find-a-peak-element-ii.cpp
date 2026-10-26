class Solution {
public:
    int findMaxInd(vector<vector<int>> &mat, int m, int n, int col){
        int max_val = INT_MIN;
        int index = -1;

        for(int i = 0; i<m; i++) {
            if(mat[i][col] > max_val) {
                max_val = mat[i][col];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0, high = n-1;

        while(low <= high) {
            int mid = (low + high) / 2;
            int maxRowInd = findMaxInd(mat, m, n, mid);
            int left = mid - 1 >= 0 ? mat[maxRowInd][mid - 1] : -1;
            int right = mid + 1 < n ? mat[maxRowInd][mid + 1] : -1;

            if(mat[maxRowInd][mid] > left && mat[maxRowInd][mid] > right) {
                return {maxRowInd, mid};
            }
            else if(mat[maxRowInd][mid] < left) {
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return {-1, -1};
    }
};