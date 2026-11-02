class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int lastA = -1;
        int lastB = -1;
        int lastC = -1;

        int count = 0;

        for(int i = 0; i < n; i++) {

            if(s[i] == 'a') lastA = i;
            else if(s[i] == 'b') lastB = i;
            else if(s[i] == 'c') lastC = i;

            count += min({lastA, lastB, lastC}) + 1;
        }

        return count;
    }
};