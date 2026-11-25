class Solution {
public:

    int largestAltitude(vector<int>& gain) {

       vector<int> pre(gain.size());
       pre[0] = gain[0];
       for( int i = 1 ; i<gain.size();i++){
        pre[i] = pre[i-1]+gain[i];
       }

       int maxi = 0;
       for( int i=0;i<pre.size();i++){
        maxi = max(maxi,pre[i]);
       }
       return maxi;
    }
};