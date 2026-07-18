class Solution {
public:
    
    //recuu
    int solve(int index , int diff , vector<int> &nums){
        //for checking backward value diff if they are formin ap or not 
        if( index<0)
        return 0;

        int ans = 0 ;
        for( int j = index-1 ; j>= 0 ; j--){
            if( nums[index] - nums[j] == diff){
                ans = max(ans , 1+solve( j , diff , nums));
            }
        }
        return ans;
    }

    //recuu+memo
    int solveMemo(int index , int diff , vector<int> &nums,vector<unordered_map<int,int>>& dp ){
        //for checking backward value diff if they are formin ap or not 
        if( index<0)
        return 0;

        if( dp[index].count(diff))
         return dp[index][diff];

        int ans = 0 ;

        for( int j = index-1 ; j>= 0 ; j--){
            if( nums[index] - nums[j] == diff){
                ans = max(ans , 1+solveMemo( j , diff , nums , dp));
            }
        }
        return dp[index][diff] = ans;
    }

    int longestArithSeqLength(vector<int>& nums) {

        //recurr
        //int n = nums.size();

        // if(n <= 2)
        // return n ;

        // int ans = 0;
        // for( int i =0 ; i<=n ; i++){
        //     for( int j = i+1 ; j<n ; j++){
        //         ans = max(ans , 2+solve(i , nums[j]- nums[i] ,nums));
        //     }
        // }

        //recuu+memo 
         int n = nums.size();
        if(n <= 2)
        return n ;

        int ans = 0;
         
       vector<unordered_map<int,int>> dp(n);
         for( int i =0 ; i<=n ; i++){
            for( int j = i+1 ; j<n ; j++){
                ans = max(ans , 2+solveMemo(i , nums[j]- nums[i] ,nums , dp));
            }
        }
        return ans ;
    }
};