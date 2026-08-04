class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {

        int miniR = m;
        int miniC = n;

        for (int i = 0; i < ops.size(); i++) {
            miniR = min(miniR, ops[i][0]);
            miniC = min(miniC, ops[i][1]);
        }
        return miniR * miniC;
    }
};