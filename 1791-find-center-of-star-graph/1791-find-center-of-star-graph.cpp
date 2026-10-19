class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> count(n+2,0);

        for( auto t : edges){
            count[t[0]]++;
            count[t[1]]++;
        }

        for( int i=1;i<count.size();i++){
            if( count[i] == n)
            return i;
        }
        return -1;
    }
};