class Solution {
public:
    int maxDepth(string s) {
        int currCount = 0;
        int maxCount = 0;

        for(int i = 0; i<s.size(); i++){
            char ch = s[i];
            if(ch == '('){
                currCount++;
                maxCount = max(currCount, maxCount);
            }
            else if(ch == ')') currCount--;
        }
        return maxCount;
    }
};