class Solution {
public:
    int solve(vector<int>& days, vector<int>& costs,int index,int n,vector<int> &dp){
       
       if(index >= n)
       return 0;

       if(dp[index] != -1)
       return dp[index];

       //for 1
       int ans1 = costs[0]+solve(days,costs,index+1,n,dp);
       //for 7
       int i = index;
       for( ; i< n && days[i] < days[index]+7; i++){}
       int ans2 = costs[1]+solve(days,costs,i,n,dp);
       //for 30
        i = index;
       for( ; i< n && days[i] < days[index]+30; i++){}
       int ans3 = costs[2]+solve(days,costs,i,n,dp);

   int ans= min(ans1,min(ans2,ans3));
    dp[index] = ans;
     return dp[index];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1,-1);
        return solve(days,costs,0,n,dp);
    }
};